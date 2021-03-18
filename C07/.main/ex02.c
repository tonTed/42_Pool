/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 10:03:06 by tblanco           #+#    #+#             */
/*   Updated: 2021/03/02 15:36:55 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int		main()
{
	int		*range;
	int		i;

	// long min = 0;
	// long max = 2147483647;
	long min = -10;
	long max = 20;
	long range_len = max - min;
	printf("range_len: %ld\n", range_len);
	
	printf("return: %d\n", ft_ultimate_range(&range, min, max));
	// printf("tab[0]: %d\n", range[0]);
	// printf("tab[2147483646]: %d\n", range[2147483646]);
	i = -1;
	while (++i < range_len)
		printf("tab[%d]: %d\n", i, range[i]);
	
	return 0;
}