/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 23:01:23 by tonted            #+#    #+#             */
/*   Updated: 2021/02/26 09:53:39 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Écrire une fonction ft_map qui, pour un tableau d’entiers donné, appliquera
** une fonction sur tous les éléments de ce tableau (dans l’ordre) et
** retournera un tableau de toutes les valeurs de retour. Cette fonction sera
** appliquée dans l’ordre du tableau.
**
** Fonctions : malloc
*/

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*ret_tab;

	i = -1;
	if (!(ret_tab = (int *)malloc(sizeof(int) * (length))))
		return (NULL);
	while (++i < length)
		ret_tab[i] = (*f)(tab[i]);
	return (ret_tab);
}
