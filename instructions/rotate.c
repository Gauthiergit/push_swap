/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:53:57 by gpeyre            #+#    #+#             */
/*   Updated: 2023/11/30 11:50:13 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
/* On fait une rotation simple de la liste donnee. Le premier element devient
le dernier element de la liste*/

void	rotate(t_stack **tab)
{
	t_stack	*temp;
	t_stack	*first ;

	first = *tab;
	temp = ft_listnew(first->content, 0);
	ft_listadd_back(tab, temp);
	first = first->next;
	free(*tab);
	*tab = first;
	clean_index(tab);
}

void	rotate_both(t_stack **a, t_stack **b)
{
	rotate(a);
	rotate(b);
}
