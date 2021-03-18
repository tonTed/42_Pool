/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 16:08:55 by tonted            #+#    #+#             */
/*   Updated: 2021/03/03 09:09:33 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		len;

	len = -1;
	while (str[++len])
		continue ;
	return (len);
}

int		ft_is_sep(char c, char *sep)
{
	int i;

	i = -1;
	while (sep[++i])
		if (c == sep[i])
			return (1);
	return (0);
}

int		ft_count_words(char *str, char *sep)
{
	int		i;
	int		words;

	i = -1;
	words = 0;
	while (str[++i])
	{
		if (ft_is_sep(str[i], sep) && str[i + 1])
		{
			while (ft_is_sep(str[++i], sep) && i != 0)
				continue ;
			if (str[i])
				words++;
		}
		if (!i && str[i + 1])
			words++;
	}
	return (words);
}

char	*ft_copy(char *str, char *sep, int *i_str)
{
	char	*copy;
	int		i_start;
	int		len_sep;
	int		len_copy;
	int		i;

	len_sep = ft_strlen(sep);
	len_copy = 0;
	i = 0;
	while (ft_is_sep(str[*i_str], sep) && str[*i_str + 1] && len_sep)
		*i_str += 1;
	i_start = *i_str;
	while (str[*i_str] && !(ft_is_sep(str[*i_str], sep)))
	{
		len_copy++;
		*i_str += 1;
	}
	if (!(copy = (char *)malloc(sizeof(char) * (len_copy + 1))))
		return (0);
	while (--len_copy >= 0)
		copy[i++] = str[i_start++];
	copy[i] = '\0';
	return (copy);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		words;
	int		i_str;
	int		i_tab;

	i_str = 0;
	i_tab = -1;
	words = ft_count_words(str, charset);
	if (!(tab = (char **)malloc(sizeof(char *) * (words + 1))))
		return (0);
	while (++i_tab < words)
		tab[i_tab] = ft_copy(str, charset, &i_str);
	tab[i_tab] = 0;
	return (tab);
}
