/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 13:59:15 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/22 15:47:04 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Il s’agit ici d’un programme, vous devrez donc avoir une fonction main dans
** votre fichier.c.
** Écrire un programme qui affiche le nom du programme.
** Exemple :
**
**		$>./a.out
**		./a.out
**		$>
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;

	(void)argc;
	i = -1;
	while (argv[0][++i])
		ft_putchar(argv[0][i]);
	write(1, "\n", 1);
	return (0);
}
