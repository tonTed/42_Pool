/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonted <tonted@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 18:35:11 by tonted            #+#    #+#             */
/*   Updated: 2021/03/01 23:04:30 by tonted           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# define ISPACE		((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
# define ISSIGN		(str[i] == '-'|| str[i] == '+')
# define ISNUM		(str[i] >= '0' && str[i] <= '9')

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef		int		(*fct_op)(int,int);
typedef		struct 	s_op
{
	char	op;
	fct_op	f_op;
}					t_op;


void		ft_putchar(char c);
void		ft_putstr(char *str);
void		ft_putnbr(int nbr);

int			ft_atoi(char *str);

int			ft_addition(int a, int b);
int			ft_substraction(int a, int b);
int			ft_multiplication(int a, int b);
int			ft_division(int a, int b);
int			ft_modulo(int a, int b);

#endif
