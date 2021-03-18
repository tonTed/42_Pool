/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 13:41:06 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/22 10:37:59 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Écrire une fonction récursive qui renvoie la factorielle du nombre passé en
** paramètre.
** Si l’argument n’est pas valide, la fonction doit renvoyer 0.
** Il ne faut pas gerer les "int overflow", le retour de la fonction sera
** indefini.
*/

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
