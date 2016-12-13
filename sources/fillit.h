/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: levitanandrej <levitanandrej@student.42.fr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 10:22:21 by levitanandrej     #+#    #+#             */
/*   Updated: 2016/12/13 13:41:33 by levitanandrej    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <fcntl.h>
# include "libft.h"

# define BUF_SIZE 20

typedef struct		s_grid
{
	int				size;
	char			**grid;
}					t_grid;

typedef struct		s_piece
{
	int				xmax;
	int				ymin;
	int				ymax;
	int				sq[4][2];
	char			ltr;
	struct s_piece	*next;
}					t_piece;

void				error_output(char *str);
t_piece				*input_reader(int fd, char ltr);
t_piece				*piece_creator(char *buf, char ltr);
void				piece_finisher(t_piece *piece, char ltr);
void				put_piece_position(t_piece *piece);
int					piecevalid(char *buf);
t_grid				*create_newgrid(int size);
void				printgrid(t_grid *grid);
int					is_valid(t_grid *grid, t_piece *piece, int x, int y);
void				insert(t_grid *grid, t_piece *piece, int x, int y);
t_grid				*gridcpy(t_grid *grid);
void				griddel(t_grid *grid);
int					gridsize(int nbrpiece);
int					nbrpiece(t_piece *piece);
t_grid				*gridfill(t_grid *grid, t_piece *piece);
#endif
