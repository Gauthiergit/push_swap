/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:56:01 by gpeyre            #+#    #+#             */
/*   Updated: 2023/11/30 12:39:15 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
/* Fonction qui renvoit l'index d'un element de la liste.*/

int	find_index(t_stack *tab, int nb)
{
	t_stack	*current;

	current = tab;
	while (current->content != nb)
		current = current->next;
	return (current->index);
}
/* Fonction qui renvoit l'index du nb de B au dessus duquel doit se trouver
le nb de A pour que la liste soit rangee.*/

int	find_place_b(t_stack *tab_b, int nb)
{
	t_stack	*current;
	t_stack	*cur_next;
	int		index;

	current = tab_b;
	cur_next = current->next;
	if (nb > current->content && nb < ft_listlast(tab_b)->content)
		index = 0;
	else if (nb > find_max(tab_b) || nb < find_min(tab_b))
		index = find_index(tab_b, find_max(tab_b));
	else
	{
		while (current && cur_next)
		{
			if (nb < current->content && nb > cur_next->content)
				index = cur_next->index;
			current = current->next;
			cur_next = cur_next->next;
		}
	}
	return (index);
}
/* Fonction qui renvoit l'index du nb de A au dessus duquel doit se trouver
le nb de B pour que la liste soit rangee.*/

int	find_place_a(t_stack *tab_a, int nb)
{
	t_stack	*current;
	t_stack	*cur_next;
	int		index;

	current = tab_a;
	cur_next = current->next;
	if (nb < current->content && nb > ft_listlast(tab_a)->content)
		index = 0;
	else if (nb > find_max(tab_a) || nb < find_min(tab_a))
		index = find_index(tab_a, find_min(tab_a));
	else
	{
		while (current && cur_next)
		{
			if (nb > current->content && nb < cur_next->content)
				index = cur_next->index;
			current = current->next;
			cur_next = cur_next->next;
		}
	}
	return (index);
}
