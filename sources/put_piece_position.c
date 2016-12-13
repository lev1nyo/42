/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_piece_position.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: levitanandrej <levitanandrej@student.42.fr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 09:07:49 by levitanandrej     #+#    #+#             */
/*   Updated: 2016/12/11 14:36:22 by levitanandrej    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	put_piece_position(t_piece *p)
{
	int	i;

	i = 1;
	while (i < 4)
	{
		p->sq[i][0] = p->sq[i][0] - p->sq[0][0];
		p->sq[i][1] = p->sq[i][1] - p->sq[0][1];
		i++;
	}
	p->sq[0][0] = 0;
	p->sq[0][1] = 0;
}
