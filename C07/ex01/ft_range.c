/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonted <tonted@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 21:06:13 by tonted            #+#    #+#             */
/*   Updated: 2021/02/22 20:30:04 by tonted           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Écrire une fonction ft_range qui retourne un tableau d’int. Ce tableau d’int
** contiendra toutes les valeurs entre min et max.
** Min inclu - max exclu.
**
** Si la valeur min est supérieure ou égale à la valeur max, un pointeur nul
** sera retourné.
*/

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	long	range;
	long	i;
	long	min_l;
	long	max_l;

	min_l = min;
	max_l = max;
	tab = 0;
	range = max_l - min_l;
	if (max_l - min_l <= 0 || min < -2147483648 || max > 2147483647)
		return ((void *)0);
	i = -1;
	tab = (int *)malloc(sizeof(int) * range);
	while (++i < range)
		tab[i] = min + i;
	return (tab);
}
