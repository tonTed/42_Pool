/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 21:03:26 by tonted            #+#    #+#             */
/*   Updated: 2021/02/22 14:03:16 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Reproduire à l’identique le fonctionnement de la fonction strdup
** (man strdup).
*/

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*new_str;
	int		i;

	i = 0;
	while (src[i])
		i++;
	new_str = (char *)malloc(sizeof(*src) * (i + 1));
	i = -1;
	while (src[++i])
		new_str[i] = src[i];
	new_str[i] = '\0';
	return (new_str);
}
