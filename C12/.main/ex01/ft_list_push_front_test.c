/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front_test.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 08:32:42 by tblanco           #+#    #+#             */
/*   Updated: 2021/03/04 13:47:35 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list_test.h"

t_list		*ft_create_elem(char *data)
{
	t_list	*list;

	if (!(list = (t_list*)malloc(sizeof(t_list))))
		return (0);
	list->data = data;
	list->next = NULL;
	return (list);
}

#include <stdio.h>

void		ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*list;

	list = ft_create_elem(data);
	list->next = *begin_list;
	*begin_list = list;
}


#include <stdio.h>

int main()
{
	t_list	**begin_list;
	t_list	*first_t_list;

	printf("&begin_list: %p\n", &begin_list);
	printf("begin_list: %p\n", begin_list);
	printf("&firs_t_list: %p\n", &first_t_list);
	printf("firs_t_list: %p\n\n", first_t_list);


	begin_list = &first_t_list;
	first_t_list =  ft_create_elem("first");
	// printf("%s | %p\n\n", first_t_list->data, first_t_list->next);

	printf("&begin_list: %p\n", &begin_list);
	printf("begin_list: %p\n", begin_list);
	printf("&firs_t_list: %p\n", &first_t_list);
	printf("firs_t_list: %p\n\n", first_t_list);

	ft_list_push_front(begin_list, "Hello");

	printf("&begin_list: %p\n", &begin_list);
	printf("begin_list: %p\n", begin_list);
	printf("&firs_t_list: %p\n", &first_t_list);
	printf("firs_t_list: %p\n\n", first_t_list);

	t_list	*n_list;
	n_list = *begin_list;

	printf("%s\n", n_list->data);
	printf("%s\n", n_list->next->data);

	return 0;
}

