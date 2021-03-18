/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonted <tonted@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 10:42:11 by tblanco           #+#    #+#             */
/*   Updated: 2021/03/03 21:42:20 by tonted           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/header.h"

void	ft_display_errno(char *str)
{
	int		errno;

	ft_putstr("ft_tail: ");
	ft_putstr(str);
	ft_putstr(": ");
	ft_putstr(strerror(errno));
	ft_putchar('\n');
}

void	ft_read_file(char *str, int fd, int to_r)
{
	int		size;
	int		r;
	int		buffer[BUFF_SIZE];
	char	*content;
	(void)to_r;
	
	size = 0;
	while ((r = read(fd, buffer, BUFF_SIZE)))
		size += r; 
	if (!(content = (char *)malloc(sizeof(char) * (size + 1))))
	{
		ft_display_errno(basename(str));
		return ;
	}
	if (close(fd) == -1)
		ft_display_errno(basename(str));
	else
	{
		if ((fd = open(str, O_RDONLY)) == -1)
			ft_display_errno(basename(str));
		else if (!(r = read(fd, content, size)))
			ft_display_errno(basename(str));
		if (to_r > size)
			to_r = size;
		content[size] = '\0';
		char	*to_disp;
		if (!(to_disp = (char *)malloc(sizeof(char) * size + 1)))
		{
			ft_display_errno(basename(str));
			return ;
		}
		int		i;
		i = -1;
		while (++i < size)
			to_disp[i] = content[size - to_r + i];
		ft_putstr(to_disp);
	}
}

int		ft_option(char *str)
{
	char	*op;
	int		i;

	op = "-c";
	i = -1;
	while (str[++i] && str[i] == op[i])
		continue ;
	if (str[i] == op[i])
		return (1);
	ft_putstr("ERROR\n");
	return (0);
}

int		main(int argc, char **argv)
{
	int		fd;
	char	str[BUFF_SIZE + 1];
	int		i;
	(void)str;

	if (argc == 1)
	{
		char	input;
		while (read(0, &input, 1) != 0)
					write(1, &input, 1);
		return (0);
	}
	else if (ft_option(argv[1]) && argc > 3)
	{
		i = 2;
		while (++i < argc)
		{
			if ((fd = open(argv[i], O_RDONLY)) == -1)
				ft_display_errno(basename(argv[i]));
			else
				ft_read_file(argv[i], fd, ft_numint(argv[2]));
		}
	}
	else
		ft_display_errno("error");
	return (0);
}

