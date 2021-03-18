/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 13:47:17 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/26 09:07:49 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Écrire une fonction qui renvoie la racine carrée entière d’un nombre si elle
** existe, 0 si la racine carrée n’est pas entière.
*/

int		ft_sqrt(int nb)
{
	int i;

	i = 1;
	while (i < nb / i)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}
