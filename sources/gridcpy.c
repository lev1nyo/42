/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gridcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: levitanandrej <levitanandrej@student.42.fr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 13:12:31 by levitanandrej     #+#    #+#             */
/*   Updated: 2016/12/13 13:31:14 by levitanandrej    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_grid	*gridcpy(t_grid *grid)
{
	t_grid	*newgrid;
	int		i;
	int		j;

	if (!(newgrid = create_newgrid(grid->size)))
		return (NULL);
	i = 0;
	while (i < grid->size)
	{
		j = 0;
		while (j < grid->size)
		{
			newgrid->grid[i][j] = grid->grid[i][j];
			j++;
		}
		i++;
	}
	return (newgrid);
}
