/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonted <tonted@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 10:11:40 by tblanco           #+#    #+#             */
/*   Updated: 2021/03/03 21:17:16 by tonted           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		ft_numint(char *str)
{
	int 	i;
	int		ret;

	i = -1;
	ret = 0;
	while(str[++i])
		ret = ret * 10 + str[i] - '0';
	return (ret);
}
