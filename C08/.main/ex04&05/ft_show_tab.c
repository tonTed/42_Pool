/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 17:58:28 by tblanco           #+#    #+#             */
/*   Updated: 2021/03/02 15:45:25 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Écrire une fonction qui affiche le contenu d’un tableau créé par la fonction
** précédente.
**
** La structure est la même que l’éxercice précédent et sera dans le fichier
** ft_stock_str.h que nous vous fournirons, :
** Pour chaque élément du tableau :
** la chaîne de caractères suivi d’un retour à la ligne
** la taille suivi d’un retour à la ligne
** la copie de la chaîne de caractères (qui aura pu être modifiée) suivi d’un
** retour à la ligne
**
** Nous testons votre fonction avec notre ft_strs_to_tab (exercice précédent).
** Prenez les mesures nécessaires pour que cela fonctionne !
**
** Fonctions : write
*/

#include <unistd.h>
#include "ft_stock_str.h"

void				ft_putchar(char c)
{
	write(1, &c, 1);
}

void				ft_putnbr(int nb)
{
	long nb_long;

	nb_long = nb;
	if (nb_long < 0)
	{
		ft_putchar('-');
		nb_long = -nb_long;
	}
	if (nb_long > 9)
	{
		ft_putnbr(nb_long / 10);
		ft_putnbr(nb_long % 10);
	}
	else
		ft_putchar(nb_long + '0');
}

void				ft_show_tab(t_stock_par *par)
{
	int	i;
	int j;

	i = -1;
	while (par[++i].str != 0)
	{
		write(1, par[i].str, par[i].size);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		j = -1;
		while (par[i].copy[++j])
			write(1, &par[i].copy[j], 1);
		write(1, "\n", 1);
	}
}
