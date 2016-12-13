/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbrpiece.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: levitanandrej <levitanandrej@student.42.fr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 14:44:27 by levitanandrej     #+#    #+#             */
/*   Updated: 2016/12/13 13:31:37 by levitanandrej    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	nbrpiece(t_piece *piece)
{
	int	i;

	i = 0;
	while (piece)
	{
		i++;
		piece = piece->next;
	}
	return (i);
}
