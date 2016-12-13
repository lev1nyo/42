/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gridfill.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: levitanandrej <levitanandrej@student.42.fr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 10:01:23 by levitanandrej     #+#    #+#             */
/*   Updated: 2016/12/11 14:32:08 by levitanandrej    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_grid	*gridfill(t_grid *grid, t_piece *piece)
{
	int		x;
	int		y;
	t_grid	*newgrid;
	t_grid	*found;

	x = 0;
	found = NULL;
	while (x < grid->size && !found)
	{
		y = 0;
		while (y < grid->size && !found)
		{
			if (is_valid(grid, piece, x, y))
			{
				newgrid = gridcpy(grid);
				insert(newgrid, piece, x, y);
				if (!piece->next)
					return (newgrid);
				found = gridfill(newgrid, piece->next);
			}
			y++;
		}
		x++;
	}
	return (found);
}
