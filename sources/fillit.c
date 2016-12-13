/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: levitanandrej <levitanandrej@student.42.fr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 18:12:01 by levitanandrej     #+#    #+#             */
/*   Updated: 2016/12/11 14:34:04 by levitanandrej    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	int		fd;
	t_piece	*piece;
	t_grid	*grid;
	int		size;

	if (argc != 2)
		error_output("error");
	fd = open(argv[1], O_RDONLY);
	if (fd < 1)
		error_output("error");
	piece = input_reader(fd, 'A');
	size = gridsize(nbrpiece(piece));
	grid = NULL;
	while (!grid)
	{
		grid = create_newgrid(size);
		grid = gridfill(grid, piece);
		size++;
	}
	printgrid(grid);
	return (0);
}
