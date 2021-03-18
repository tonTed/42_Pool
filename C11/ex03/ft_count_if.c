/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 23:32:30 by tonted            #+#    #+#             */
/*   Updated: 2021/02/26 10:48:18 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Écrire une fonction ft_count_if qui renverra le nombre d’éléments du tableau
** qui, en les passant à la fonction f, ne renvoient pas 0.
** Cette fonction sera appliquée dans l’ordre du tableau.
*/

int		ft_count_if(char **tab, int length, int (*f)(char*))
{
	int i;
	int	ret;

	ret = 0;
	i = -1;
	while (++i < length)
		if (f(tab[i]))
			ret++;
	return (ret);
}
