/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 13:35:48 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/26 13:36:46 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


int		ft_diff(int a, int b)
{
	return (a - b);
}

int main()
{
	// printf("ft_count_if\n");
	// printf("  |-> LOOP %d, ret: %d, length: %d\n", i, ret, length);
	// printf("  |-> BEFORE LOOP\n");
	// printf("  |-> AFTER LOOP, ret: %d\n", ret);
	int		tab[5];
	int		(*f)(int, int);


	f = &ft_diff;

	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 2;
	tab[3] = 4;
	tab[4] = 5;

	printf("# %d\n", ft_is_sort(tab, 5, f));

	return 0;
}