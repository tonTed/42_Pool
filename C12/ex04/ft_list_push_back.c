/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonted <tonted@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 15:11:49 by tblanco           #+#    #+#             */
/*   Updated: 2021/03/04 16:18:44 by tonted           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

t_list		*ft_create_elem(void *data)
{
	t_list	*list;

	if (!(list = (t_list*)malloc(sizeof(t_list))))
		return (0);
	list->data = data;
	list->next = NULL;
	return (list);
}

t_list		*ft_list_last(t_list *begin_list)
{
	t_list	*ret;

	while (begin_list)
	{
		ret = begin_list;
		begin_list = begin_list->next;
	}
	return (ret);
}

void		ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*temp;
	t_list	*new_elem;

	temp = ft_list_last(*begin_list);
	new_elem = ft_create_elem(data);
	temp->next = new_elem;
}
