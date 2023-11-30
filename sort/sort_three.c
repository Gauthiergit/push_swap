/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:55:01 by gpeyre            #+#    #+#             */
/*   Updated: 2023/11/30 12:38:39 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
/* Cette fonction est utilisee pour ranger la liste donne lorsqu'elle ne
contient que 3 elements*/

void	sort_three(t_stack **tab)
{
	if ((*tab)->content == find_max(*tab))
	{
		rotate(tab);
		ft_printf("ra\n");
	}
	if (find_min(*tab) == ft_listlast(*tab)->content)
	{
		rev_rotate(tab);
		ft_printf("rra\n");
	}
	if ((*tab)->next->content == find_max(*tab))
	{
		rev_rotate(tab);
		ft_printf("rra\n");
	}
	if ((*tab)->next->content == find_min(*tab))
	{
		swap(tab);
		ft_printf("sa\n");
	}
}
