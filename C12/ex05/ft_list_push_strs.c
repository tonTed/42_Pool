/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonted <tonted@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 16:19:37 by tonted            #+#    #+#             */
/*   Updated: 2021/03/04 16:31:53 by tonted           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_push_strs(int size, char **strs)
{
	
}

int main()
{
	t_list	*list;
	char	**strs;
	int		size = 3;

	strs[0] = "Bonjour";
	strs[1] = " 42";
	strs[2] = "!";

	list = ft_list_push_strs(size, strs);
	return 0;
}
