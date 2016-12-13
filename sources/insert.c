/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: levitanandrej <levitanandrej@student.42.fr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 14:30:06 by levitanandrej     #+#    #+#             */
/*   Updated: 2016/12/13 13:31:31 by levitanandrej    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	insert(t_grid *grid, t_piece *piece, int x, int y)
{
	int i;

	i = 0;
	while (i < 4)
	{
		grid->grid[x + piece->sq[i][0]][y + piece->sq[i][1]] = piece->ltr;
		i++;
	}
}
