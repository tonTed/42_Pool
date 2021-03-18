/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct_creation.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonted <tonted@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 10:44:40 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/28 08:38:23 by tonted           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

#define ISSPACE ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')


char		*ft_get_nbr(char *str)
{
	int		i_dup;
	int		i;
	char	*dup_nb;

	i = 0;
	while (!ISSPACE && str[i] != ':')
		i++;
	dup_nb = (char *)malloc(sizeof(char) * (i + 1));
	i_dup = -1;
	while (++i_dup < i)
		dup_nb[i_dup] = str[i_dup];
	dup_nb[i_dup] = '\0';
	return (dup_nb);
}

char		*ft_get_str(char *str)
{
	int		i_dup;
	int		i;
	char	*dup_str;

	i = 0;
	while (str[i] != ':')
		i++;
	i++;
	while (ISSPACE)
		i++;
	i_dup = i;
	while (str[i])
		i++;	
	dup_str = (char *)malloc(sizeof(char) * ((i_dup - i) * -1 + 1));
	// printf("%d\n", ((i_dup - i) * -1 + 1));
	i = 0;
	while (str[i_dup])
	{
		dup_str[i] = str[i_dup];
		i++;
		i_dup++;
	}
	dup_str[i_dup] = '\0';
	//free(str);
	return (dup_str);
}

t_dict		*ft_struc_creation(char **input, int len_input)
{
	t_dict		*dict;
	int			i;

	if(!(dict = malloc(sizeof(t_dict) * 5 * (len_input + 1))))
		return NULL;
	printf("len_input: %d\n", len_input);
	i = -1;
	while (++i < len_input)
	{
		dict[i].nbr = ft_get_nbr(input[i]);
		dict[i].str = ft_get_str(input[i]);
		dict[i].len_str = ft_strlen(dict[i].str);
	}
	// free(input);
	return (dict);
}
