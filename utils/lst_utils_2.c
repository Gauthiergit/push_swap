/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:55:41 by gpeyre            #+#    #+#             */
/*   Updated: 2023/11/30 12:25:41 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
/* Fonction  qui remet les index dans l'ordre. Utile apres les mouvements*/

void	clean_index(t_stack **tab)
{
	t_stack	*current;
	int		index;

	index = 0;
	current = *tab;
	while (current)
	{
		current->index = index;
		index++;
		current = current->next;
	}
}
/* Fonction qui calcule la talle de la liste chainee */

int	ft_listsize(t_stack *lst)
{
	int		len;
	t_stack	*current;

	if (lst == NULL)
		return (0);
	current = lst;
	len = 0;
	while (current)
	{
		len++;
		current = current->next;
	}
	return (len);
}
/* Fonction qui return le dernier element de la liste chainee */

t_stack	*ft_listlast(t_stack *lst)
{
	t_stack	*current;

	if (lst == NULL)
		return (NULL);
	current = lst;
	while (current->next != NULL)
		current = current->next;
	return (current);
}
