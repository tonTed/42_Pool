/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 13:43:45 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/22 10:34:55 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Écrire une fonction récursive qui renvoie une puissance d’un nombre.
** Comme il n’y a pas de concensus sur 0 puissance 0, nous considererons que le
** resultat sera 1.
** Il ne faut pas gerer les "int overflow", le retour de la fonction sera
** indefini.
*/

int	ft_recursive_power(int nb, int power)
{
	int	ret;

	ret = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
