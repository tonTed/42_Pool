/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 15:26:33 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/22 15:26:35 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int		main()
{
	// long i = -1;
	long min = -2147483648;
	long max = 2147483647;
	long range = max - min;
	printf("%ld\n", range);
	
	int *tab = ft_range(min, max);
	printf("tab[0]: %d\n", tab[0]);
	printf("tab[4294967294]: %d\n", tab[4294967294]);
	// while (++i < range)
	// 	printf("tab[%ld]: %d\n", i, tab[i]);
}