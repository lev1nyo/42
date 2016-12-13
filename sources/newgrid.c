/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newgrid.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: levitanandrej <levitanandrej@student.42.fr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 10:39:18 by levitanandrej     #+#    #+#             */
/*   Updated: 2016/12/11 14:29:33 by levitanandrej    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_grid	*create_newgrid(int size)
{
	t_grid	*newgrid;
	int		i;

	if (!(newgrid = (t_grid*)ft_memalloc(sizeof(t_grid))))
		return (NULL);
	newgrid->size = size;
	if (!(newgrid->grid = (char**)ft_memalloc(sizeof(char*) * size)))
		return (NULL);
	i = 0;
	while (i < size)
	{
		if (!(newgrid->grid[i] = (char*)ft_memalloc(sizeof(char) * (size + 1))))
			return (NULL);
		i++;
	}
	return (newgrid);
}
