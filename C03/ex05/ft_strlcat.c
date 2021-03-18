/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 18:49:24 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/24 15:24:49 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int dest_len;
	unsigned int src_len;
	unsigned int i;

	i = -1;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dest_len < size)
		src_len += dest_len;
	else
		src_len += size;
	if (size > 0)
	{
		while (src[++i] && (i + dest_len) < size - 1)
			dest[i + dest_len] = src[i];
		dest[i + dest_len] = '\0';
	}
	return (src_len);
}
