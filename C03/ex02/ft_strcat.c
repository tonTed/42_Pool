/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 18:47:21 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/16 12:37:01 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Reproduire à l’identique le fonctionnement de la fonction strcat
** (man strcat)
*/

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len_dest;

	i = -1;
	len_dest = ft_strlen(dest);
	while (src[++i] != '\0')
		dest[len_dest + i] = src[i];
	dest[len_dest + i] = '\0';
	return (dest);
}
