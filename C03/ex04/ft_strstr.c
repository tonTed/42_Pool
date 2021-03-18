/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 18:49:00 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/24 16:37:10 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Reproduire à l’identique le fonctionnement de la fonction strstr
** (man strstr).
*/

char	*ft_strstr(char *str, char *to_find)
{
	int		i_str;
	int		i_find;

	i_str = -1;
	if (to_find[0] == '\0')
		return (str);
	while (str[++i_str])
	{
		i_find = 0;
		while (str[i_str + i_find] == to_find[i_find])
		{
			if (to_find[i_find + 1] == '\0')
				return (str + i_str);
			i_find++;
		}
	}
	return (0);
}
