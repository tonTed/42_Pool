/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 13:10:14 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/12 07:09:03 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	first_pair;
	int second_pair;

	first_pair = 0;
	while (first_pair <= 99)
	{
		second_pair = first_pair + 1;
		while (second_pair <= 99)
		{
			ft_putchar(first_pair / 10 + '0');
			ft_putchar(first_pair % 10 + 48);
			ft_putchar(' ');
			ft_putchar(second_pair / 10 + 48);
			ft_putchar(second_pair % 10 + '0');
			if (first_pair != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			second_pair++;
		}
		first_pair++;
	}
}
