/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:55:55 by gpeyre            #+#    #+#             */
/*   Updated: 2023/11/30 12:28:25 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
/* Fonction qui cree un nouveau noeud */

t_stack	*ft_listnew(int content, int index)
{
	t_stack	*newlist;

	newlist = (t_stack *)malloc(sizeof(*newlist));
	if (!newlist)
		return (NULL);
	newlist->content = content;
	newlist->index = index;
	newlist->next = NULL;
	return (newlist);
}
/* Fonction qui met un noeud au debut d'une liste chainee.*/

void	ft_listadd_front(t_stack **lst, t_stack *new)
{
	if (!new)
		return ;
	new->next = *lst;
	new->index = 0;
	*lst = new;
}
/* Fonction qui met un noeud a la fin d'une liste chainee.*/

void	ft_listadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*current;

	current = NULL;
	if (!new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		current = *lst;
		while (current->next != NULL)
			current = current->next;
		current->next = new;
		new->index = current->index + 1;
		new->next = NULL;
	}
}
/* Fonction qui nettoie les allocations de la liste chainee */

void	ft_listclear(t_stack **lst)
{
	t_stack	*current;
	t_stack	*futur;

	current = *lst;
	if (!lst || !(*lst))
		return ;
	while (current->next != NULL)
	{
		futur = current->next;
		free(current);
		current = futur;
	}
	free(current);
	*lst = NULL;
}
