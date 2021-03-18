/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 13:38:53 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/22 10:54:48 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Écrire une fonction itérative qui renvoie un nombre. Ce nombre est le
** résultat de l’opération factorielle à partir du nombre passé en paramètre.
** Si l’argument n’est pas valide, la fonction doit renvoyer 0.
** Il ne faut pas gerer les "int overflow", le retour de la fonction sera
** indefini.
*/

int		ft_iterative_factorial(int nb)
{
	int i;
	int nb_fact;

	i = 0;
	nb_fact = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	else
		while (++i <= nb)
			nb_fact *= i;
	return (nb_fact);
}
