/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 20:48:33 by tonted            #+#    #+#             */
/*   Updated: 2021/02/22 13:27:42 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	sort_params(char **argv, int argc)
{
	int		i;
	char	*swap;

	i = 0;
	while (++i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			swap = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = swap;
			i = 0;
		}
	}
}

void	print_params(char **argv, int argc)
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
}

int		main(int argc, char *argv[])
{
	sort_params(argv, argc);
	print_params(argv, argc);
	return (0);
}
