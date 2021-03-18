/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonted <tonted@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 23:28:38 by tonted            #+#    #+#             */
/*   Updated: 2021/02/24 23:29:14 by tonted           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	squared(int nb)
{
	return nb * nb;
}

int main()
{
	int 	tab[] = {2, 3, 4, 5};
	int		(*ptrf)(int);
	int		*ret_tab;

	ptrf = &squared;
	ret_tab = ft_map(tab, 4, ptrf);

	int i = -1;
	while(++i < 4)
		printf("%d\n",ret_tab[i]);
		
	
	return 0;
}

