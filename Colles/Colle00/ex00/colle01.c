/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/27 06:14:11 by Bfleury           #+#    #+#             */
/*   Updated: 2016/02/29 11:01:04 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle.h"

void	colle(int x, int y)
{
	int		i;
	int		j;

	i = 0;
	while (i++ < y && x > 0 && ((j = 0) || 1))
	{
		while (j++ < x)
			if (i == 1 && (j == 1 || j == x))
				ft_putchar((j == 1) ? '/' : '\\');
			else if (i == y && (j == 1 || j == x))
				ft_putchar((j == 1) ? '\\' : '/');
			else
				ft_putchar((i == 1 || i == y || j == 1 || j == x) ? '*' : ' ');
		ft_putchar('\n');
	}
}
