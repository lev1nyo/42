/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   piece_creator.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: levitanandrej <levitanandrej@student.42.fr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 13:12:49 by levitanandrej     #+#    #+#             */
/*   Updated: 2016/12/13 13:41:59 by levitanandrej    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_piece	*piece_creator(char *buf, char s)
{
	int		i;
	t_piece	*piece;
	int		n;

	i = 0;
	n= 0;
	if (!piecevalid(buf))
		error_output("piece_creator 1 test");
	piece = (t_piece*)ft_memalloc(sizeof(t_piece));
	if (!piece)
		error_output("piece_creator 2 test");
	piece->next = NULL;
	while (buf[i] && n < 4)
	{
		if (buf[i] == '#')
		{
			piece->sq[n][0] = i / 5;
			piece->sq[n][1] = i % 5;
			n++;
		}
		i++;
	}
	piece_finisher(piece, s);
	return (piece);
}
