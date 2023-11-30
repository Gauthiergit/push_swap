/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:54:45 by gpeyre            #+#    #+#             */
/*   Updated: 2023/11/30 12:38:21 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*ft_sort_b(t_stack **tab_a);
void	ft_sort_a(t_stack **tab_a, t_stack **tab_b);
void	ft_sort_b_till_3(t_stack **tab_a, t_stack **tab_b);

/* Cette fonction range la liste A dans le cas ou il n'y a que 2 element, dans
celui ou il n'y en a que 3 et dans le cas ou il y en a plus*/

void	ft_sort(t_stack **tab_a)
{
	t_stack	*tab_b;
	t_stack	*cur;

	tab_b = NULL;
	cur = NULL;
	if (ft_listsize(*tab_a) == 2)
	{
		swap(tab_a);
		ft_printf("sa\n");
	}
	else if (ft_listsize(*tab_a) == 3)
		sort_three(tab_a);
	else
	{
		tab_b = ft_sort_b(tab_a);
		ft_sort_a(tab_a, &tab_b);
		tab_b = NULL;
		if (is_sortable(*tab_a))
			final_sort(tab_a);
	}
}
/* Cette fonction range la liste B jusqu'a qu'il ne reste que 3 elements dans
la liste A. On commmence par push 2 fois dans B pour avoir un maximum et un
minimum si c'est possible. On range egalement les 3 derniers elements de A*/

t_stack	*ft_sort_b(t_stack **tab_a)
{
	t_stack	*tab_b;

	tab_b = NULL;
	if (ft_listsize(*tab_a) > 3 && is_sortable(*tab_a))
		push_b(tab_a, &tab_b);
	if (ft_listsize(*tab_a) > 3 && is_sortable(*tab_a))
		push_b(tab_a, &tab_b);
	if (ft_listsize(*tab_a) > 3 && is_sortable(*tab_a))
		ft_sort_b_till_3(tab_a, &tab_b);
	if (is_sortable(*tab_a))
		sort_three(tab_a);
	return (tab_b);
}
/* Cette fonction est utilise pour ranger la liste B jusqu'a qu'il ne reste
que 3 elements dans la liste A. On calcule le nombre de rotation minimum
pour push un element de la liste A dans la liste B puis on effectue les
rotations correspondantes*/

void	ft_sort_b_till_3(t_stack **tab_a, t_stack **tab_b)
{
	t_stack	*cur;
	int		mouv_nb;

	while (ft_listsize(*tab_a) > 3 && is_sortable(*tab_a))
	{
		cur = *tab_a;
		mouv_nb = min_rotate_b(tab_a, tab_b);
		while (mouv_nb >= 0)
		{
			if (mouv_nb == ft_case_rrarrb(tab_a, tab_b, cur->content))
				mouv_nb = display_and_push_rrarrb(tab_a, tab_b, cur->content);
			else if (mouv_nb == ft_case_rarb(tab_a, tab_b, cur->content))
				mouv_nb = display_and_push_rarb(tab_a, tab_b, cur->content);
			else if (mouv_nb == ft_case_rarrb(tab_a, tab_b, cur->content))
				mouv_nb = display_and_push_rarrb(tab_a, tab_b, cur->content);
			else if (mouv_nb == ft_case_rrarb(tab_a, tab_b, cur->content))
				mouv_nb = display_and_push_rrarb(tab_a, tab_b, cur->content);
			else
				cur = cur->next;
		}
	}
}
/* Cette fonction est utilise pour ranger la liste A jusqu'a qu'il ne reste
plus d'elements dans la liste B. On calcule le nombre de rotation minimum
pour push un element de la liste B dans la liste A puis on effectue les
rotations correspondantes*/

void	ft_sort_a(t_stack **tab_a, t_stack **tab_b)
{
	int		size;
	int		mouv_nb;
	t_stack	*cur;

	size = ft_listsize(*tab_a) + ft_listsize(*tab_b);
	while (ft_listsize(*tab_a) != size)
	{
		cur = *tab_b;
		mouv_nb = min_rotate_a(tab_a, tab_b);
		while (mouv_nb >= 0)
		{
			if (mouv_nb == ft_case_rrarrb_a(tab_a, tab_b, cur->content))
				mouv_nb = display_and_push_rrarrb_a(tab_a, tab_b, cur->content);
			else if (mouv_nb == ft_case_rarb_a(tab_a, tab_b, cur->content))
				mouv_nb = display_and_push_rarb_a(tab_a, tab_b, cur->content);
			else if (mouv_nb == ft_case_rarrb_a(tab_a, tab_b, cur->content))
				mouv_nb = display_and_push_rarrb_a(tab_a, tab_b, cur->content);
			else if (mouv_nb == ft_case_rrarb_a(tab_a, tab_b, cur->content))
				mouv_nb = display_and_push_rrarb_a(tab_a, tab_b, cur->content);
			else
				cur = cur->next;
		}
	}
}
