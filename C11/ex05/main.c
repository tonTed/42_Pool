/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonted <tonted@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 19:07:26 by tonted            #+#    #+#             */
/*   Updated: 2021/03/01 23:08:36 by tonted           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/header.h"

t_op	*ft_creation_struct_ope()
{
	t_op	*tab_op;
	
	tab_op = (t_op *)malloc(sizeof(t_op) * 5);
	tab_op[0].op = '+';	
	tab_op[0].f_op = &ft_addition;
	tab_op[1].op = '-';	
	tab_op[1].f_op = &ft_substraction;
	tab_op[2].op = '*';	
	tab_op[2].f_op = &ft_multiplication;
	tab_op[3].op = '/';	
	tab_op[3].f_op = &ft_division;
	tab_op[4].op = '%';	
	tab_op[4].f_op = &ft_modulo;
	return (tab_op);
}

int		ft_doop(char op, char *a, char *b, t_op *tab_op)
{
	int		ops;
	int		ret;

	ops = 5;
	while (--ops >= 0)
	{
		if (tab_op[ops].op == op)
		{
			ret = tab_op[ops].f_op(ft_atoi(a), ft_atoi(b));
			if (ft_atoi(b) != 0 && !(op == '/' || op == '%'))
			{
				ft_putnbr(ret);
				return (1);
			}
		}
	}
	ft_putchar('0');
	return (0);
}

int 	main(int argc, char **argv)
{
	t_op	*tab_op;
	
	if (argc != 4)
		return 0;
	tab_op = ft_creation_struct_ope();
	ft_doop(argv[2][0], argv[1], argv[3], tab_op);
	ft_putchar('\n');
	return 0;
}
