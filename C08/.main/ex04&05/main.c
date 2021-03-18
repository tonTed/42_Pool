/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:46:59 by tblanco           #+#    #+#             */
/*   Updated: 2021/03/02 15:51:15 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
void				ft_show_tab(t_stock_par *par);

int main()
{
	t_stock_str		*struc_str;
	char			*tab[5];
	int				ac = 5;

	tab[0] = "Salut";
	tab[1] = "42";
	tab[2] = "exam";
	tab[3] = "day";
	tab[4] = "today";

	struc_str = ft_strs_to_tab(ac, tab);

	ft_show_tab(struc_str);

	return 0;
}