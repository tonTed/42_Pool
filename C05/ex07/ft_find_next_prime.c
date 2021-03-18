/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 13:49:05 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/22 11:25:32 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Écrire une fonction qui renvoie le nombre premier immédiatement supérieur ou
** égal au nombre passé en paramètre.
*/

int		ft_is_prime(int nb)
{
	int div;

	div = 1;
	if (nb <= 1)
		return (0);
	while (++div < nb && div < 2147483647)
	{
		if (nb % div == 0 && nb != div)
		{
			return (0);
		}
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (!(ft_is_prime(nb)))
		return (ft_find_next_prime(nb + 1));
	else
		return (nb);
}
