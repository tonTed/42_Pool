/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonted <tonted@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 22:59:59 by tonted            #+#    #+#             */
/*   Updated: 2021/02/24 23:00:08 by tonted           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long nb_long;

	nb_long = nb;
	if (nb_long < 0)
	{
		ft_putchar('-');
		nb_long = -nb_long;
	}
	if (nb_long > 9)
	{
		ft_putnbr(nb_long / 10);
		ft_putnbr(nb_long % 10);
	}
	else
		ft_putchar(nb_long + '0');
}

int		main()
{
	int 	tab[] = {1, 2, 3, 4, 5};
	void	(*ptrf)(int);

	ptrf = &ft_putnbr;

	ft_foreach(tab, 5, ptrf);
	
	return 0;
}