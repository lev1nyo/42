/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   piece_finisher.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: levitanandrej <levitanandrej@student.42.fr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 12:07:49 by levitanandrej     #+#    #+#             */
/*   Updated: 2016/12/11 14:36:15 by levitanandrej    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	piece_finisher(t_piece *p, char ltr)
{
	int i;

	i = 1;
	if (ltr > 'Z')
		error_output("more than 26 char");
	p->ltr = ltr;
	put_piece_position(p);
	while (i < 4)
	{
		if (p->ymin > p->sq[i][1])
			p->ymin = p->sq[i][1];
		if (p->xmax < p->sq[i][0])
			p->xmax = p->sq[i][0];
		if (p->ymax < p->sq[i][1])
			p->ymax = p->sq[i][1];
		i++;
	}
}
