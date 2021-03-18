/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonted <tonted@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:01:37 by tblanco           #+#    #+#             */
/*   Updated: 2021/03/03 19:00:14 by tonted           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_in(char *str, char *charset)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (charset[j])
	{
		if (str[i] == charset[j++])
		{
			i++;
			j = 0;
		}
	}
	return (i);
}

int		c_w(char *str, char *sep)
{
	int		i_str;
	int		words;
	int		is_word;

	i_str = -1;
	words = 0;
	is_word = 0;
	while (str[++i_str])
	{
		if (!(is_in(&str[i_str], sep)) && !is_word)
		{
			words++;
			is_word = 1;
		}
		else if ((is_in(&str[i_str], sep)))
			is_word = 0;
	}
	return (words);
}

char	*copy_word(char *str, char *sep, int *i_str)
{
	char	*word;
	int		len;
	int		i;

	if((i = is_in(&str[*i_str], sep)))
		*i_str += i;
	len = 0;
	while(!is_in(&str[*i_str], sep) && str[*i_str])
	{
		len++;
		*i_str += 1;
	}
	if (!(word = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	word[len] = '\0';
	i = -1;
	while(++i < len)
		word[i] = str[*i_str - len + i];
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**t;
	int		i;
	int		w;
	int		i_str;

	if (!(t = (char **)malloc(sizeof(char*) * (w = c_w(str, charset) + 1))))
		return (0);
	i = -1;
	i_str = 0;
	while (++i < w - 1)
		t[i] = copy_word(str, charset, &i_str);

	t[w - 1] = 0;
	return (t);
}
