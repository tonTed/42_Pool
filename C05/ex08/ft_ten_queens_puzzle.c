/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 13:50:17 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/22 10:38:34 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Écrire une fonction qui affiche toutes les possibilités de placer dix dames
** sur un échiquier de 10x10 sans qu’elles ne puissent s’atteindre en un seul
** coup.
** La recursivité devra être utilisée.
** La valeur de retour de votre fonction devra être le nombre de solutions
** affichées
**
** L’affichage se fera de la façon suivante :
**		$>./a.out | cat -e
**		0257948136$
**		0258693147$
**		...
**		4605713829$
**		4609582731$
**		...
**		9742051863$
**		$>
**
** La suite se lit de gauche à droite. Le premier chiffre correspond à la
** position de la première dame dans la première colonne (l’index commençant
** à 0). Le énième chiffre correspond à la position de la énième dame dans la
** énième colonne.
*/
