/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 21:12:26 by tonted            #+#    #+#             */
/*   Updated: 2021/03/03 08:29:11 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Écrire une fonction qui va concatener l’ensemble des chaîne de caractères
** pointées par strs en les séparants à l’aide de sep.
** size représente la taille de strs.
** Si size vaut 0, il faut retourner une chaîne de caractères vide que l’on
** peut free().
*/

#include <stdlib.h>

char	*ft_size0(void)
{
	char	*ret_str;

	if (!(ret_str = malloc(sizeof(char) * 1)))
		return (0);
	*ret_str = '\0';
	return (ret_str);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_strcat(char *ret_str, char *str, int i_ret, int size_ret)
{
	int		i;

	i = -1;
	while (str[++i])
		ret_str[i_ret++] = str[i];
	if (i_ret == size_ret)
		ret_str[i_ret] = '\0';
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i_str;
	char	*ret_str;
	int		size_ret;
	int		i_ret;

	if (size == 0)
		return (ft_size0());
	i_str = -1;
	size_ret = ft_strlen(sep) * (size - 1);
	while (++i_str < size)
		size_ret += ft_strlen(strs[i_str]);
	if (!(ret_str = (char *)malloc(sizeof(char) * (size_ret + 1))))
		return (0);
	i_str = -1;
	i_ret = -1;
	while (i_ret++ <= size_ret)
	{
		while (++i_str < size)
		{
			i_ret += ft_strcat(ret_str, strs[i_str], i_ret, size_ret);
			if (i_str < size - 1)
				i_ret += ft_strcat(ret_str, sep, i_ret, size_ret);
		}
	}
	return (ret_str);
}
