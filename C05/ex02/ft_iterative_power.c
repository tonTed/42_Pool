/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 13:42:36 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/22 10:25:37 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Écrire une fonction itérative qui renvoie une puissance d’un nombre. Une
** puissance inferieur à 0 renverra 0.
** Comme il n’y a pas de concensus sur 0 puissance 0, nous considererons que le
** resultat sera 1.
** Il ne faut pas gerer les "int overflow", le retour de la fonction sera
** indefini.
*/

int	ft_iterative_power(int nb, int power)
{
	int ret;

	ret = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		while (power-- > 1)
			ret *= nb;
	return (ret);
}
