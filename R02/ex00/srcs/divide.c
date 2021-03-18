/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   divide.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonted <tonted@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 10:17:28 by ddutton           #+#    #+#             */
/*   Updated: 2021/02/27 20:43:14 by tonted           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

void	ft_hundreds(char *str, char *result, int pos, t_dict *dict)
{
	int		i;
	char	*a;
	int		nbz;

	printf("%s, %s, %d, %s\n", str, result, pos, dict[1].nbr);
	nbz = ft_nbz(str, pos);
	if (str[pos + 0] != 0)
	{
		ft_strcatd(result, search(&str[pos + 0], dict));
		ft_strcatd(result, search(("100"), dict));
	}
	if (str[pos + 1] != 0 && str[pos + 1] != 1)
	{
		a = "?0";
		a[0] = (str[pos + 1]);
		ft_strcatd(result, search((a), dict));
	}
	if (str[pos + 1] == 1)
	{
		a = "dd";
		a[0] = (str[pos + 1]);
		a[1] = (str[pos + 2]);
		ft_strcatd(result, search((a), dict));
	}
	if (str[pos + 1] != 1 && str[pos + 2] != 0)
		ft_strcatd(result, search((&str[pos + 2]), dict));
	if (nbz > 0)
	{
		i = 0;
		a = "1";
		while (i++ <= (nbz * 3))
			ft_strcatd(a, "0");
		ft_strcatd(result, search((a), dict));
	}
}

int		ft_nbz(char *str, int pos)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return ((i - pos - 1) / 3);
}

char	*search(char *str, t_dict *dict)
{
	int		i;
	char	*a;
	int		ltab;

	// ltab = calculer longueur tab de structure?
	i = 0;
	// ltab = valeur temporaire
	ltab = 3;
	printf("%s, %s\n", str, dict[1].nbr);
	while (i < ltab)
	{
		if (ft_strcmp(str, dict[i].nbr) != 0)
		{
			a = " ";
			ft_strcatd(a, dict[i].str);
			return (a);
		}
		i++;
	}
	//error (dict_error)	return (a);
	//placeholder
	return ("AAA");
}

char	*ft_strcatd(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src [j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (&dest[0]);
}

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			break ;
	}
	return (s1[i] - s2[i]);
}

// int		main(void)
// {
// 	char	*result;
// 	t_dict	one;
// 	t_dict	two;
// 	t_dict	hundred;

// 	one.nbr = "1";
// 	one.str = "one";
// 	one.len_str = 3;
// 	two.nbr = "1";
// 	two.str = "two";
// 	two.len_str = 3;
// 	hundred.nbr = "1";
// 	hundred.str = "hundred";
// 	hundred.len_str = 7;

// 	t_dict	*tab_struc;
// 	tab_struc = malloc(sizeof(t_dict) * 3);
// 	tab_struc[0] = one;
// 	tab_struc[1] = two;
// 	tab_struc[2] = hundred;


// 	result = "temporaire";
// 	ft_hundreds("102", result, 0, tab_struc);
// 	printf("%s\n", result);
// 	return (0);
// }
