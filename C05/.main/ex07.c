/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex07.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 10:32:25 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/22 11:28:00 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "../ex07/ft_find_next_prime.c"

int main()
{
	printf("%d\n", ft_find_next_prime(25));

	int i = -5;
	while(i++ <= 101)
		printf("Prime %d: %d\n", i, ft_find_next_prime(i));

	i = 2147483638;
	while(i++ <= 2147483646)
		printf("Prime %d: %d\n", i, ft_find_next_prime(i));
	return 0;
}