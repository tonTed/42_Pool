/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 13:48:09 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/22 10:38:26 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Écrire une fonction qui renvoie 1 si le nombre est premier et 0 si le nombre
** ne l’est pas.
**
** 0 et 1 ne sont pas des nombres premiers.
*/

int	ft_is_prime(int nb)
{
	int div;

	div = 1;
	if (nb <= 1)
		return (0);
	while (++div <= nb && div < 2147483647)
		if (nb % div == 0 && nb != div)
			return (0);
	return (1);
}
