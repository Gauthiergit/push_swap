/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:54:10 by gpeyre            #+#    #+#             */
/*   Updated: 2023/11/30 11:53:44 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
/* On interverti de place les 2 premiers element de la liste */

void	swap(t_stack **tab)
{
	t_stack	*first;
	t_stack	*second;

	first = *tab;
	if (first && first->next)
	{
		second = first->next;
		first->next = second->next;
		second->next = first;
		*tab = second;
		clean_index(tab);
	}
}
