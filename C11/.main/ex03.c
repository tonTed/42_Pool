/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 10:47:42 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/26 10:47:43 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int i = -1;
	while (str[++i])
		continue ;
	return (i);
}

int main()
{
	// printf("ft_count_if\n");
	// printf("  |-> LOOP %d, ret: %d, length: %d\n", i, ret, length);
	// printf("  |-> BEFORE LOOP\n");
	// printf("  |-> AFTER LOOP, ret: %d\n", ret);
	char	*tab[5];
	int		(*f)(char*);

	f = &ft_strlen;

	tab[0] = "a";
	tab[1] = "";
	tab[2] = "b";
	tab[3] = "";
	tab[4] = "s";

	printf("# %d\n", ft_count_if(tab, 5, f));

	return 0;
}