/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonted <tonted@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 22:22:04 by tonted            #+#    #+#             */
/*   Updated: 2021/02/26 08:33:43 by tonted           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct	s_stock_str
{
	int size;
	char *str;
	char *copy;
} 				t_stock_str;

// typedef struct	s_stock_par
// {
// 	int size;
// 	char *str;
// 	char *copy;
// } 				t_stock_par;


typedef t_stock_str t_stock_par;