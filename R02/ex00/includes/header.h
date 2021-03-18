/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonted <tonted@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 09:54:04 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/27 21:15:04 by tonted           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/uio.h>

# define BUF_SIZE 5000

typedef		struct	s_dict
{
	char	*nbr;
	char	*str;
	int		len_str;
}					t_dict;


void		ft_putstr(char *str);
void		ft_putchar(char c);
int			ft_strlen(char *str);
t_dict		*ft_struc_creation(char **input, int len_input);
char		*search(char *str, t_dict *dict);
int			ft_nbz(char *str, int pos);
char		*ft_strcatd(char *dest, char *src);
int			ft_strcmp(char *s1, char *s2);
void		ft_hundreds(char *str, char *result, int pos, t_dict *dict);
char		**make_dict_lines(const char *path);
void		ft_free_tab2(char **tab);

#endif