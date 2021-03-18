/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonted <tonted@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 13:56:48 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/28 08:38:29 by tonted           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

int		ft_numbers_dict(char *path)
{

}

int		ft_other_dict(char *pat)
{
	
}


int		main(int argc, char **argv)
{
	char	**input;
	t_dict	*dict;
	int 	i;

	if (argc < 2 || argc > 3)
		return (ft_errors(1));
	if(!(input = make_dict_lines("numbers.dict")))
		return (ft_errors(2));
	i = -1;
	while (input[++i])
		continue ;
	if(!(dict = malloc(sizeof(t_dict) * i)))
		return (NULL);
 	if (!(dict = ft_struc_creation(input, i)))
		return (ft_errors(2)); // free avant return?
	ft_free_tab2(input);
}