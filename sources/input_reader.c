/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_reader.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: levitanandrej <levitanandrej@student.42.fr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 11:12:44 by levitanandrej     #+#    #+#             */
/*   Updated: 2016/12/11 14:35:05 by levitanandrej    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_piece	*input_reader(int fd, char ltr)
{
	t_piece	*piece;
	char	buf[BUF_SIZE + 1];
	int		ret;

	piece = NULL;
	ret = read(fd, buf, BUF_SIZE);
	if (ret > 0)
	{
		buf[ret] = 0;
		if (ret < 20)
			error_output("buff more than 20");
		piece = piece_creator(buf, ltr);
		ret = read(fd, buf, 1);
		if (!ret)
			return (piece);
		if (ret == -1 || buf[0] != '\n')
			error_output("ft_input_reader error in piece separation");
		piece->next = input_reader(fd, ltr + 1);
		if (!piece->next)
			error_output("ft_input_reader nothing to iter next \n");
	}
	else
		error_output("read error");
	return (piece);
}
