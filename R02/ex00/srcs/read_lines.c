/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_lines.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonted <tonted@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 11:42:24 by jkasongo          #+#    #+#             */
/*   Updated: 2021/02/27 20:43:28 by tonted           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

int ft_isspace(char c)
{
	if ((c == '\t') || (c == '\v'))
		return (1);
	if ((c == '\f') || (c == '\r') || (c == ' '))
		return (1);
	return (0);
}

char	*read_dict(const char *path)
{
	int		fd;
	int		size;
	int		r;
	char	buffer[BUF_SIZE + 1];
	char	*readedstr;

	//premiere lecture
	if ((fd = open(path, O_RDONLY)) == -1)
		return (NULL);
	size = 0;
	while ((r = read(fd, buffer, BUF_SIZE)))
		size = size + r;
	readedstr = (char *)malloc(sizeof(char) * (size + 1));
	if (close(fd) == -1)
		return (NULL);
	if ((fd = open(path, O_RDONLY)) == -1) //seconde lecture
		return (NULL);
	r = read(fd, readedstr, size);
	readedstr[size] = 0;
	if (close(fd) == -1)
		return (NULL);
	return (readedstr);
}

int		checkline(char *file_str, int i)
{
	int begin;

	begin = i;
	while (file_str[i] != '\n' && (file_str[i]))
	{
		while ((file_str[i] >= '0') && (file_str[i] <= '9'))
			i++;
		if (i == begin)
			return (0);
		while (ft_isspace(file_str[i]))
			i++;
		if (file_str[i] != ':')
			return (0);
		while (ft_isspace(file_str[i]))
			i++;
		while((file_str[i] >= 32) && (file_str[i] <= 126))
			i++;
		if (file_str[i] != '\n')
			return (0);
	}
	return (i);
}

char	*get_file_str(const char *path)
{
	int		begin;
	int		i;
	char	*file_str;

	if ((file_str = read_dict(path)) == NULL)
		return (NULL);
	i = 0;
	while (file_str[i])
	{
		begin = i;
		while (file_str[i] != '\n' && (file_str[i]))
			i++;
		if (checkline(file_str, begin) == 0)
			return (NULL);
		i++;
	}
	return (file_str);
}

int 	proccess_line(int count, char *file_str, char *lines[])
{
	int i;
	int line_length;
	int j;
	int k;

	i = -1;
	k = 0;
	while ((++i < count) && (file_str[k] != 0))
	{
		line_length = 0;
		j = 0;
		while ((file_str[k] != '\n') && (file_str[k] != 0))
		{
			k++;
			line_length++;
		}
		lines[i] = (char *)malloc(sizeof(char) * (line_length + 1));
		k = k - line_length;
		while ((file_str[k] != '\n') && (file_str[k] != 0))
			lines[i][j++] = file_str[k++];
		lines[i][j] = '\0';
		while (file_str[k] == '\n')
			k++;
	}
	return (i);
}

int		count_lines(char *file_str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (file_str[i])
	{
		while (file_str[i] != '\n' && (file_str[i]))
			i++;
		while (file_str[i] == '\n')
			i++;
		count++;
		i++;
	}
	return (count);
}

char	**make_dict_lines(const char *path)
{
	int		nb_lines;
	char	*file_str;
	char	**lines;
	
	file_str = get_file_str(path);
	if (file_str == NULL)
		return (NULL);
	nb_lines = count_lines(file_str);
	lines = (char **)malloc(sizeof(char *) * (nb_lines + 1));
	proccess_line(nb_lines, file_str, lines);
	lines[nb_lines] = NULL;
	free(file_str);
	return (lines);
}


// int main(int argc, char const *argv[])
// {
// 	char **lines = NULL;
// 	int i = 0;

// 	if(argc == 2)
// 	{
// 		lines = make_dict_lines(argv[1]);
// 		if (lines == NULL)
// 			printf("Erreur dictionaire");
// 		else
// 		{
// 			while (lines[i] != NULL)
// 			{
// 				printf("ligne %d : %s \n",i,lines[i]);
// 				i++;
// 			}
// 		}
		
// 		free(lines);
// 	}
// 	return 0;
// }
