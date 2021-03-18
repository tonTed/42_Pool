/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 17:56:47 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/26 09:21:24 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Ecrire une fonction qui prend en parametre un tableau de chaîne de
** caractères ainsi que la taille de ce tableau et renvoie un tableau de
** structure.
** Elle doit transformer chaque element du tableau de chaîne de caractères en
** structure.
**
** La structure sera définie dans le fichier ft_stock_str.h comme suit :
**			typedef struct	s_stock_str
**			{
**			int size;
**
**			char *str;
**			char *copy;
**			} 				t_stock_str;
**
** size étant la taille de la chaîne de caractères ;
** str étant la chaîne de caractères ;
** copy étant une copie de la chaîne de caractères ;
**
** Elle doit garder l’ordre des elements de av.
** Le tableau de structures devra être alloué et le dernièr element aura 0 pour
** valeur de str, ceci afin de signifier la fin du tableau.
**
** Si une erreur d’allocation arrive elle doit renvoyer un pointeur NULL.
** Nous testons votre fonction avec notre ft_show_tab (exercice suivant).
** Prenez les mesures nécessaires pour que cela fonctionne !
**
** Fonctions : malloc, free
*/

#include "ft_stock_str.h"
#include <stdlib.h>

int					ft_strlen(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		continue ;
	return (i);
}

char				*ft_strmcpy(char *str, int len)
{
	int		i;
	char	*ret;

	ret = (char *)malloc(sizeof(char) * (len + 1));
	i = -1;
	while (str[++i] != '\0')
		ret[i] = str[i];
	ret[i] = '\0';
	return (ret);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int				i;
	t_stock_str		*tab_str;

	i = -1;
	tab_str = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!(tab_str))
		return (NULL);
	while (++i < ac)
	{
		tab_str[i].size = ft_strlen(av[i]);
		tab_str[i].str = av[i];
		tab_str[i].copy = ft_strmcpy(av[i], tab_str[i].size);
	}
	tab_str[i].size = 0;
	tab_str[i].str = 0;
	tab_str[i].copy = 0;
	return (tab_str);
}
