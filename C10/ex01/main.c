/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonted <tonted@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 10:42:11 by tblanco           #+#    #+#             */
/*   Updated: 2021/03/03 20:00:41 by tonted           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/header.h"

void	ft_display_errno(char *str)
{
	int		errno;

	ft_putstr("ft_cat: ");
	ft_putstr(str);
	ft_putstr(": ");
	ft_putstr(strerror(errno));
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int		fd;
	int		r;
	char	str[BUFF_SIZE + 1];
	int		i;

	if (argc == 1)
	{
		char	input;
		while (read(0, &input, 1) != 0)
					write(1, &input, 1);
		return (0);
	}
	else
	{
		i = 0;
		while (++i < argc)
		{
			if ((fd = open(argv[i], O_RDONLY)) == -1)
				ft_display_errno(basename(argv[i]));
			else
			{
				r = read(fd, str, BUFF_SIZE);
				if (close(fd) == -1)
					ft_display_errno(basename(argv[i]));
				else
					ft_putstr(str);
			}
		}
	}
	return (0);
}

