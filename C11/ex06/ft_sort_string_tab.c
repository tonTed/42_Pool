/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 13:40:19 by tblanco           #+#    #+#             */
/*   Updated: 2021/03/02 10:29:40 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = -1;
	while (s1[++i] && s2[i])
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	return (0);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	char	*temp;

	i = -1;
	while (tab[++i])
	{
		if (ft_strcmp(tab[i], tab[i + 1]) < 0)
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
		}
	}
	i = 0;
	while (1)
	{
		printf("%s\n",tab[i++]);
	}
}

#include <stdlib.h>

int main()
{
	char	**tab;
	int		i = 0;
	
	tab = malloc(sizeof(char *) * 6);
	tab[i++] = malloc(sizeof(char) * 20);
	tab[i++] = malloc(sizeof(char) * 20);
	tab[i++] = malloc(sizeof(char) * 20);
	tab[i++] = malloc(sizeof(char) * 20);
	tab[i++] = malloc(sizeof(char) * 20);


	tab[0] = "Salut";
	tab[1] = "42";
	tab[2] = "exam";
	tab[3] = "day";
	tab[4] = "today";
	tab[5] = 0;
	
	ft_sort_string_tab(tab);
	i = -1;
	while (++i < 6)
	{
		printf("%s\n",tab[i]);
	}

	return 0;
}

