/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 17:45:56 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/13 18:38:21 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;

	i = 0;
	while (i++ < size)
	{
		if (!(tab[size - 2] < tab[size - 1] && i >= size - 1))
		{
			i--;
			if (tab[i] <= tab[i + 1])
				i++;
			else
			{
				ft_swap(&tab[i], &tab[i + 1]);
				i = 0;
			}
		}
	}
}
