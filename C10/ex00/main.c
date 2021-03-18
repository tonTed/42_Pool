/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 09:27:00 by tblanco           #+#    #+#             */
/*   Updated: 2021/03/03 10:14:01 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/header.h"

int		main(int argc, char **argv)
{
	int		fd;
	int		r;
	char	str[BUFF_SIZE + 1];

	if (argc == 1)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	else if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
	else if ((fd = open(argv[1], O_RDONLY)) == -1)
	{
		ft_putstr("Cannot read file.\n");
		return (0);
	}
	r = read(fd, str, BUFF_SIZE);
	if (close(fd) == -1)
		return (0);
	ft_putstr(str);
}
