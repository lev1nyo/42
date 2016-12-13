/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_output.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: levitanandrej <levitanandrej@student.42.fr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 14:49:57 by levitanandrej     #+#    #+#             */
/*   Updated: 2016/12/13 13:30:56 by levitanandrej    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	error_output(char *str)
{
	ft_putendl("error");
	exit(0 * (int)str);
}
