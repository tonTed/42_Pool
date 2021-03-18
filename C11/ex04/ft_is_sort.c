/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 23:33:31 by tonted            #+#    #+#             */
/*   Updated: 2021/02/26 13:37:05 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Écrire une fonction ft_is_sort qui renverra 1 si le tableau est trié et 0
** dans le cas contraire.
**
** La fonction passée en paramètre renverra un entier négatif si le premier
** argument est inférieur au deuxième, 0 s’ils sont égaux et un entier positif
** autrement.
*/

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = -1;
	while (++i < length)
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
	return (1);
}
