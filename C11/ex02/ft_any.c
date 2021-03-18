/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 23:30:25 by tonted            #+#    #+#             */
/*   Updated: 2021/02/26 09:53:50 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Écrire une fonction ft_any qui renverra 1 si, en le passant à la fonction f,
** au moins un élément du tableau renvoie autre chose que 0, sinon elle
** renverra 0.
** Cette fonction sera appliquée dans l’ordre du tableau
**
** Le tableau sera terminé par un pointeur nul.
*/

#include <stdio.h>

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = -1;
	while (tab[++i] != 0)
		if (f(tab[i]) != 0)
			return (1);
	return (0);
}
