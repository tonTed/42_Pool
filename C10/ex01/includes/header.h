/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonted <tonted@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 09:27:34 by tblanco           #+#    #+#             */
/*   Updated: 2021/03/03 20:36:16 by tonted           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <libgen.h>
# include <errno.h>

# define BUFF_SIZE 30000

void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putnbr(int nbr);



# include <stdio.h>

#endif
