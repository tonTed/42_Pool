/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonted <tonted@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 19:24:45 by tonted            #+#    #+#             */
/*   Updated: 2021/03/01 21:23:54 by tonted           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

int		ft_addition(int a, int b)
{
	return (a + b);
}

int		ft_substraction(int a, int b)
{
	return (a - b);
}

int		ft_multiplication(int a, int b)
{
	return (a * b);
}

int		ft_division(int a, int b)
{
	if (b == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	return (a / b);
}

int		ft_modulo(int a, int b)
{
	if (b == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	return (a % b);
}