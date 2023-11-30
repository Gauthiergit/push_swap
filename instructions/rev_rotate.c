/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:53:51 by gpeyre            #+#    #+#             */
/*   Updated: 2023/11/30 11:49:36 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
/* On fait une rotation inverse de la liste donnee. Le dernier element devient
le premier element de la liste*/

void	rev_rotate(t_stack **tab)
{
	t_stack	*first;
	t_stack	*last;

	first = *tab;
	last = ft_listlast(first);
	while (first->next->next != NULL)
		first = first->next;
	first->next = NULL;
	last->next = *tab;
	*tab = last;
	clean_index(tab);
}

void	rev_rotate_both(t_stack **a, t_stack **b)
{
	rev_rotate(a);
	rev_rotate(b);
}
