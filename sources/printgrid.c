/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printgrid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: levitanandrej <levitanandrej@student.42.fr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 13:31:41 by levitanandrej     #+#    #+#             */
/*   Updated: 2016/12/13 13:31:45 by levitanandrej    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	printgrid(t_grid *grid)
{
	int i;
	int j;

	i = 0;
	while (i < grid->size)
	{
		j = 0;
		while (j < grid->size)
		{
			if (grid->grid[i][j])
				ft_putchar(grid->grid[i][j]);
			else
				ft_putchar('.');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
