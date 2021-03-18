/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 13:45:13 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/22 10:36:57 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Écrire une fonction ft_fibonacci qui renvoie le n-ième élément de la suite
** de Fibonacci, le premier élément étant à l’index 0. Nous considererons que
** la suite de Fibonacci commence par 0, 1, 1, 2.
** Les overflows ne devront pas être gerés.
**
** Évidemment, ft_fibonacci devra être récursive.
** Si index est inférieur à 0, la fonction renverra -1.
*/

int		ft_fibonacci(int index)
{
	int ret;

	ret = 0;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index <= 2)
		return (1);
	else
		return (ret + ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
