/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:56:09 by gpeyre            #+#    #+#             */
/*   Updated: 2023/11/30 12:34:09 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
/* Fonction qui verifie si la liste n'est pas deja ordonnee.*/

int	is_sortable(t_stack *tab)
{
	t_stack	*next;

	next = tab->next;
	while (tab && next)
	{
		if (tab->content > next->content)
			return (1);
		tab = tab->next;
		next = next->next;
	}
	return (0);
}
/* Fonction qui renvoit le nb maximum de la liste. */

int	find_max(t_stack *tab)
{
	t_stack	*current;
	int		max;

	max = tab->content;
	current = tab;
	while (current)
	{
		if (current->content > max)
			max = current->content;
		current = current->next;
	}
	return (max);
}
/* Fonction qui renvoit le nb minimum de la liste. */

int	find_min(t_stack *tab)
{
	t_stack	*current;
	int		min;

	min = tab->content;
	current = tab;
	while (current)
	{
		if (current->content < min)
			min = current->content;
		current = current->next;
	}
	return (min);
}
