/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   griddel.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: levitanandrej <levitanandrej@student.42.fr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 14:47:35 by levitanandrej     #+#    #+#             */
/*   Updated: 2016/12/13 13:31:18 by levitanandrej    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	griddel(t_grid *grid)
{
	t_grid	*tmp;
	int		i;

	tmp = grid;
	i = 0;
	while (i < grid->size)
	{
		free(tmp->grid[i]);
		tmp->grid[i] = NULL;
		i++;
	}
	free(tmp->grid);
	tmp->grid = NULL;
	free(tmp);
	tmp = NULL;
}
