/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 10:31:02 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/22 11:24:18 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

#include "../ex06/ft_is_prime.c"

int main()
{
	int i = -5;
	while(i++ <= 100)
		printf("Prime %d: %d\n", i, ft_is_prime(i));

	
	i = 2147483627;
	while(i++ <= 2147483646)
		printf("Prime %d: %d\n", i, ft_is_prime(i));

}
