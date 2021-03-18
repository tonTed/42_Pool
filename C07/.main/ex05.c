/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 18:07:32 by tonted            #+#    #+#             */
/*   Updated: 2021/03/03 09:08:53 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int		main()
{	

	// char	str[]		= "                                                         ";
	// char	charset[]	= "     ";
	// char	str[]		= "  gh  ";
	// char	charset[]	= " ";
	// char	str[]		= "9JWJtUAA4S2JRmeX61rWNadzVg4gh0VS0Nkj5m";
	// char	charset[]	= "";
	// char	str[]		= "bonjourQuejbec43fefewfgweg.";
	// char	charset[]	= "jQ4fwg";
	char	str[]		= "Salut!!Comment!!Ca va!!!a!a!a";
	char	charset[]	= "!";
	// char	str[]		= "                                                         ";
	// char	charset[]	= "     ";
	// char	str[]		= "                                                         ";
	// char	charset[]	= "     ";
	// char	str[]		= "                                                         ";
	// char	charset[]	= "     ";

	char	**tab;

	tab = ft_split(str, charset);
	
	int i = 0;
	while(tab[i])
	{
		printf(">>> %s\n", tab[i++]);
	}
}