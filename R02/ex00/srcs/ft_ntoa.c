/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ntoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 10:39:42 by sfournie          #+#    #+#             */
/*   Updated: 2021/02/27 17:58:11 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "header.h"

// char	*ft_strcat(char *dest, char *src)
// {
// 	int		i;
// 	char	*temp;

// 	i = 0;
// 	if (ft_strlen(src) == 0)
// 		return (&dest[0]);
// 	temp = malloc(ft_strlen(dest) + ft_strlen(src) + 1);
// 	while (dest[i])
// 	{
// 		temp[i] = dest[i];
// 		i++;
// 	}
// 	while (*src)
// 	{
// 		temp[i] = *src;
// 		i++;
// 		src++;
// 	}
// 	free(dest);
// 	temp[i] = '\0';
// 	return (&temp[0]);
// }

// char	*ft_hundreds(char *str, int pos)
// {
// 	int		i;
// 	char	*temp;

// 	i = 0;
// 	temp = malloc(50);
// 	while (i < 3)
// 	{
// 		if (str[pos] == '1')
// 			temp = ft_strcat(temp, "un");
// 		if (str[pos] == '2')
// 			temp = ft_strcat(temp, "deux");
// 		i++;
// 		pos++;
// 	}
// 	temp = ft_strcat(temp, " ");
// 	return (temp);
// }

// char	*ft_ntoa(char *str, int size)
// {
// 	char	**n_a;
// 	char	*temp;
// 	int		i;
// 	int		blocks;

// 	blocks = (size + 2) / 3;
// 	n_a = malloc(sizeof(char *) * blocks);
// 	temp = malloc(0);
// 	i = 0;
// 	while (i < blocks)
// 	{
// 		n_a[i] = ft_hundreds(str, i * 3);
// 		i++;
// 	}
// 	i = 0;
// 	while (i < blocks)
// 	{
// 		temp = ft_strcat(temp, n_a[i]);
// 		free(n_a[i]);
// 		i++;
// 	}
// 	free(n_a);
// 	return (temp);
// }

// int		main(void)
// {
// 	char str[] = "121122112";
// 	char *result;
// 	printf("%s\n", "Starting");
// 	//result = ft_ntoa(result, str, ft_strlen(str));
// 	result = ft_ntoa(str, ft_strlen(str));
// 	printf("%s\n", result);
// 	return (0);
	

	
// }

