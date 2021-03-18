/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 21:08:41 by tonted            #+#    #+#             */
/*   Updated: 2021/03/02 15:37:22 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Écrire une fonction ft_ultimate_range qui alloue et assigne un tableau
** d’int.
** Ce tableau d’int contiendra toutes les valeurs entre min et max.
** Min inclu - max exclu.
**
** La taille de range sera retournée (ou -1 en cas de problème).
** Si la valeur min est supérieure ou égale à la valeur max, range pointera sur
** NULL et on renverra 0.
*/

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	range_len;
	int	i;

	i = -1;
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	range_len = max - min;
	if (!(*range = malloc(range_len * sizeof(int))))
		return (-1);
	while (min < max)
		(*range)[++i] = min++;
	return (range_len);
}
