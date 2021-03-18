/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonted <tonted@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 21:38:18 by tonted            #+#    #+#             */
/*   Updated: 2021/03/01 22:20:31 by tonted           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

int		ft_atoi(char *str)
{
	int			i;
	int			sign;
	unsigned	nbr;

	i = 0;
	sign = 1;
	nbr = 0;
	while (str[i] && ISPACE)
		i++;
	while (str[i] && ISSIGN)
		if (str[i++] == '-')
			sign *= -1;
	while (str[i] && ISNUM)
		nbr = (nbr * 10) + (str[i++] - '0');
	return (nbr * sign);
}