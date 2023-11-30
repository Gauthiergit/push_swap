/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:53:28 by gpeyre            #+#    #+#             */
/*   Updated: 2023/11/30 11:47:16 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
/* On push le premier element de A au dessus de B.*/

void	push_b(t_stack **a, t_stack **b)
{
	t_stack	*temp;
	t_stack	*first;

	first = *a;
	temp = ft_listnew(first->content, 0);
	ft_listadd_front(b, temp);
	first = first->next;
	free(*a);
	*a = first;
	clean_index(a);
	clean_index(b);
	ft_printf("pb\n");
}
/* On push le premier element de B au dessus de A.*/

void	push_a(t_stack **a, t_stack **b)
{
	t_stack	*temp;
	t_stack	*first;

	first = *b;
	temp = ft_listnew(first->content, 0);
	ft_listadd_front(a, temp);
	first = first->next;
	free(*b);
	*b = first;
	clean_index(a);
	clean_index(b);
	ft_printf("pa\n");
}
