/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 22:50:41 by tonted            #+#    #+#             */
/*   Updated: 2021/02/26 09:54:18 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Écrire une fonction ft_foreach qui, pour un tableau d’entiers donné,
** appliquera une fonction sur tous les éléments de ce tableau. Cette fonction
** sera appliquée dans l’ordre du tableau.
**
** Par exemple, la fonction ft_foreach pourra être appelée de la façon suivante
** pour afficher l’ensemble des entiers du tableau :
**		ft_foreach(tab, 1337, &ft_putnbr);
*/

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int i;

	i = -1;
	while (++i < length)
		(*f)(tab[i]);
}
