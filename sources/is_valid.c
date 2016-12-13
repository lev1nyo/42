/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: levitanandrej <levitanandrej@student.42.fr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 14:44:48 by levitanandrej     #+#    #+#             */
/*   Updated: 2016/12/13 13:31:34 by levitanandrej    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	is_valid(t_grid *grid, t_piece *piece, int x, int y)
{
	int i;

	i = 0;
	if (grid->grid[x][y] || piece->ymin + y < 0
			|| piece->xmax + x >= grid->size || piece->ymax + y >= grid->size)
		return (0);
	while (i < 4)
	{
		if (grid->grid[x + piece->sq[i][0]][y + piece->sq[i][1]] != 0)
			return (0);
		i++;
	}
	return (1);
}
