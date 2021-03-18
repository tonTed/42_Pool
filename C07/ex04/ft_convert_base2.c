/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 21:17:04 by tonted            #+#    #+#             */
/*   Updated: 2021/02/25 08:49:18 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long	str_w(char c, char *str, int to_do)
{
	long i;

	i = 0;
	if (to_do == 1)
	{
		i = -1;
		while (str[++i])
			if (c == str[i])
				return (1);
		return (0);
	}
	if (to_do == 2)
	{
		while (str[i])
			if (c == str[i++])
				return (i - 1);
		return (0);
	}
	while (str[i])
		i++;
	return (i);
}

int		bad_b(char *base)
{
	int		i;
	int		j;

	i = -1;
	while (base[++i] != '\0')
	{
		if (base[i] <= ' ' || base[i] == '+' || base[i] == '-')
			return (0);
		j = i;
		while (base[++j] != '\0')
			if (base[i] == base[j])
				return (0);
	}
	if (str_w('!', base, 3) <= 1)
		return (0);
	return (1);
}
