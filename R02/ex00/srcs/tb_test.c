/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tb_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonted <tonted@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 11:35:35 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/27 20:43:52 by tonted           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

// int main()
// {
// 	char	*file = "numbers.dict";
// 	int		fd;
// 	int		ret_read;

// 	char	file_content[5000];

// 	fd = open(file, O_RDONLY);

// 	ret_read = read(fd, file_content, 5000);
// 	printf("ret_read: %d\n", ret_read);
// 	file_content[ret_read] = '\0';
// 	// ft_putstr(file_content);
	
// 	int i;
// 	int point;
// 	int count;

// 	point = 0;
// 	count = 0;
// 	i = 0;
// 	while (file_content[i] != 0)
// 	{
// 		point = 0;
// 		while (file_content[i] != '\n')
// 		{	
// 			// printf(">>>>>>>>>>>\n");
// 			if(file_content[i] == ':')
// 			{
// 				point++;
// 			}
// 			i++;
// 			// printf(">>>>>%d>>>>>>\n", point);

// 		}
// 		if (point == 1)
// 			count++;
// 		// printf("BERFOR i++ %d | COUNT %d\n", i, count);
// 		i++;
// 		printf("AFTER line: %d, char %c\n", count, file_content[i]);
// 	}

// 	printf("count: %d\n", count);

// 	printf("\n");
// 	printf("fd: %d\n", fd);
	
// 	close(fd);
	
// 	return 0;
// }
