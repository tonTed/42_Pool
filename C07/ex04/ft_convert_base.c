/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 21:14:19 by tonted            #+#    #+#             */
/*   Updated: 2021/03/02 16:54:08 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Écrire une fonction qui renvoie le résultat de la conversion de la chaîne
** nbr exprimée en une base base_from dans une base base_to.
** nbr, base_from, base_to ne seront pas forcement modifiable.
** nbr suivra les m ˆme règles que atoi_b. Attention donc au ’+’, ’-’ et
** aux whitespaces.
** Le nombre representé par nbr tient dans un int.
** Si une base est incorrecte, la fonction renverra NULL.
** Le nombre retourné doit être préfixé seulement par un seul et unique ’-’ si
** c’est nécessaire, pas de whitespaces ou de ’+’.
*/

#include <stdlib.h>

long	str_w(char c, char *str, int to_do);
int		bad_b(char *base);

long	power(long nb, long pow)
{
	long ret;

	ret = nb;
	if (pow < 0)
		return (0);
	if (pow == 0)
		return (1);
	if (pow == 1)
		return (nb);
	else
		return (nb * power(nb, pow - 1));
}

int		atoi_b(char *str, char *base)
{
	int		i;
	int		neg;
	long	ret;
	long	pow;

	i = 0;
	neg = 1;
	ret = 0;
	pow = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || (str[i] == ' '))
		i++;
	i--;
	while ((str[++i] == '-') || (str[i] == '+'))
		if (str[i] == '-')
			neg *= -1;
	while (str_w(str[i], base, 1))
		i++;
	i--;
	while (str_w(str[i], base, 1))
		ret += power(str_w('!', base, 3), pow++) * (str_w(str[i--], base, 2));
	if (ret * neg > 2147483647 || ret * neg < -2147483648)
		return (0);
	return (ret * neg);
}

char	*ft_putnbr_base(long nbr, char *base, char *ret, int *i)
{
	long	len;
	long	nbr_lg;

	len = str_w(' ', base, 3);
	nbr_lg = nbr;
	if (nbr_lg < 0)
	{
		nbr_lg = -nbr_lg;
		ret[(*i)++] = '-';
	}
	if (nbr_lg >= len)
	{
		ft_putnbr_base(nbr_lg / len, base, ret, i);
		ft_putnbr_base(nbr_lg % len, base, ret, i);
	}
	else
		ret[(*i)++] = base[nbr_lg];
	return (ret);
}

long	len_char(long nb, char *base_to)
{
	long i;
	long len_base;
	long ret;

	ret = 0;
	i = 0;
	len_base = str_w(' ', base_to, 3);
	if (nb < 0)
	{
		nb *= -1;
		i++;
	}
	while (nb >= len_base)
	{
		nb /= len_base;
		i++;
	}
	return (++i);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	nb;
	char	*ret;
	int		i;

	i = 0;
	if (!((bad_b(base_to) && bad_b(base_from)) || str_w('!', nbr, 3) <= 0))
		return (0);
	nb = atoi_b(nbr, base_from);
	if (!(ret = (char *)malloc(sizeof(char) * (len_char(nb, base_to) + 1))))
		return (0);
	ret = ft_putnbr_base(nb, base_to, ret, &i);
	ret[len_char(nb, base_to) + 1] = '\0';
	return (ret);
}
