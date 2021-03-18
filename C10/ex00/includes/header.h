/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 09:27:34 by tblanco           #+#    #+#             */
/*   Updated: 2021/03/03 10:13:01 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <fcntl.h>

# define BUFF_SIZE 4096

void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putnbr(int nbr);

#endif
