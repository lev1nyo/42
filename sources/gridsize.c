/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gridsize.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: levitanandrej <levitanandrej@student.42.fr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 13:18:52 by levitanandrej     #+#    #+#             */
/*   Updated: 2016/12/13 13:31:29 by levitanandrej    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		gridsize(int nbrpiece)
{
	int		size;

	size = 0;
	while (ft_pow(size, 2) < nbrpiece * 4)
		size++;
	return (size);
}
