/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 19:58:27 by tonted            #+#    #+#             */
/*   Updated: 2021/02/22 11:44:51 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*++str)
		len++;
	return (len + 1);
}

int	main(int argc, char *argv[])
{
	int		i;
	char	*ptr;

	i = 0;
	while (++i < argc)
	{
		ptr = argv[i];
		write(1, ptr, sizeof(ptr[0]) * (ft_strlen(ptr)));
		write(1, "\n", 1);
	}
	return (0);
}
