/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 10:24:44 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/22 10:26:05 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "../ex02/ft_iterative_power.c"

int main()
{
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(-5, 0));
	printf("%d\n", ft_iterative_power(0, -5));
	printf("%d\n", ft_iterative_power(5, -5));
	printf("%d\n", ft_iterative_power(-5, 5));
	printf("%d\n", ft_iterative_power(5, 5));
}