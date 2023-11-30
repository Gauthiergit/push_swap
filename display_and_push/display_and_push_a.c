/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_and_push_a.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:50:55 by gpeyre            #+#    #+#             */
/*   Updated: 2023/11/30 11:45:47 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
/* Chacune de ces fonctions realisent leurs rotations tant que le nb de B n'est
pas au dessus de sa liste et que nb de A qui est sense suivre le nb de B n'est
pas lui aussi au dessus de sa liste. Puis on push le nb de B dans A.

Dans le cas des 2 premieres fonctions, des doubles roations (inverse ou simple)
seront effectues en priorite pour minimiser le nombre de mouvements.*/

int	display_and_push_rrarrb_a(t_stack **tab_a, t_stack **tab_b, int nb)
{
	while (find_place_a(*tab_a, nb) > 0 && find_index(*tab_b, nb) > 0)
	{
		rev_rotate_both(tab_a, tab_b);
		ft_printf("rrr\n");
	}
	while (find_index(*tab_b, nb) > 0)
	{
		rev_rotate(tab_b);
		ft_printf("rrb\n");
	}
	while (find_place_a(*tab_a, nb) > 0)
	{
		rev_rotate(tab_a);
		ft_printf("rra\n");
	}
	push_a(tab_a, tab_b);
	return (-1);
}

int	display_and_push_rarb_a(t_stack **tab_a, t_stack **tab_b, int nb)
{
	while (find_place_a(*tab_a, nb) > 0 && find_index(*tab_b, nb) > 0)
	{
		rotate_both(tab_a, tab_b);
		ft_printf("rr\n");
	}
	while (find_index(*tab_b, nb) > 0)
	{
		rotate(tab_b);
		ft_printf("rb\n");
	}
	while (find_place_a(*tab_a, nb) > 0)
	{
		rotate(tab_a);
		ft_printf("ra\n");
	}
	push_a(tab_a, tab_b);
	return (-1);
}

int	display_and_push_rrarb_a(t_stack **tab_a, t_stack **tab_b, int nb)
{
	while (find_index(*tab_b, nb) > 0)
	{
		rotate(tab_b);
		ft_printf("rb\n");
	}
	while (find_place_a(*tab_a, nb) > 0)
	{
		rev_rotate(tab_a);
		ft_printf("rra\n");
	}
	push_a(tab_a, tab_b);
	return (-1);
}

int	display_and_push_rarrb_a(t_stack **tab_a, t_stack **tab_b, int nb)
{
	while (find_index(*tab_b, nb) > 0)
	{
		rev_rotate(tab_b);
		ft_printf("rrb\n");
	}
	while (find_place_a(*tab_a, nb) > 0)
	{
		rotate(tab_a);
		ft_printf("ra\n");
	}
	push_a(tab_a, tab_b);
	return (-1);
}
