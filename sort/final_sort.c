/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:54:27 by gpeyre            #+#    #+#             */
/*   Updated: 2023/11/30 11:57:10 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
/* Selon ou est place le minimum dans la liste A, on va effectuer des rotations
simples ou inverses pour qu'il se retouve au dessus de la liste A.*/

void	final_sort(t_stack **tab_a)
{
	if (find_index(*tab_a, find_min(*tab_a)) < ((ft_listsize(*tab_a) - 1) / 2))
	{
		while (find_index(*tab_a, find_min(*tab_a)) != 0)
		{
			rotate(tab_a);
			ft_printf("ra\n");
		}
	}
	else
	{
		while (find_index(*tab_a, find_min(*tab_a)) != 0)
		{
			rev_rotate(tab_a);
			ft_printf("rra\n");
		}
	}
}
