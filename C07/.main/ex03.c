/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 08:00:21 by tblanco           #+#    #+#             */
/*   Updated: 2021/03/03 08:16:55 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char 	**strs;
	char 	sep[] = " <> ";
	char	*str = NULL;

	strs = (char **)malloc(100);
	strs[0] = "Hello";
	strs[1] = "World";
	strs[2] = "%";
	strs[3] = "Hello";
	strs[4] = "42";

	printf("%p\n", str);
	str = ft_strjoin(5, strs, sep);
	printf("%p\n", str);

	// printf("%s\n",str);
	// while (*str)
	// {
	// 	printf("%c\n", *str++);
	// }
	printf("BEFORE\n");
	free(str);
	printf("AFTER\n");

	return (0);
}