/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonted <tonted@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 20:55:20 by tonted            #+#    #+#             */
/*   Updated: 2021/02/27 20:58:04 by tonted           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

int		ft_errors(int err)
{
	if (err == 1)
		ft_putstr("Error\n");
	if (err == 2)
		ft_putstr("Dict Error\n");
	return (0);
}