/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 07:26:13 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/24 09:59:20 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_str(char *str, int size)
{
	write(1, str, size);
}

void	ft_print_combn(int n)
{
	char	str[n + 3];
	int		i;

	if (n <= 0 || n >= 10)
		return ;
	i = -1;
	while (++i < n)
		str[i] = i + '0';
	str[i++] = ',';
	str[i++] = ' ';
	while (*str <= ':' - n)
	{
		ft_print_str(str, n);
		if (!(str[n - 1] == '9' && str[0] == '9' - n + 1))
			ft_print_str(&str[n], 2);
		i = n;
		while (i-- != 0)
			if (++str[i] <= ':' - n + i)
				break ;
		while (++i > 0 && i < n)
			str[i] = str[i - 1] + 1;
	}
}
