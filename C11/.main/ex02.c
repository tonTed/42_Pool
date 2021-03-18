/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 09:49:02 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/26 09:50:24 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int i = -1;
	while (str[++i])
		i++;
	return (i);
}

int main()
{
	char	*tab[5];
	int		(*f)(char*);

	f = &ft_strlen;

	tab[0] = "a";
	tab[1] = "";
	tab[2] = "";
	tab[3] = "";
	tab[4] = 0;

	printf("# %d\n", ft_any(tab, f));

	return 0;
}