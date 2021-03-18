/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 10:26:28 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/22 10:27:02 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "../ex03/ft_recursive_power.c"

int main()
{
	printf("%d\n", ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(-5, 0));
	printf("%d\n", ft_recursive_power(0, -5));
	printf("%d\n", ft_recursive_power(5, -5));
	printf("%d\n", ft_recursive_power(-5, 5));
	printf("%d\n", ft_recursive_power(5, 5));
}