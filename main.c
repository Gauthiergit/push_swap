/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:56:39 by gpeyre            #+#    #+#             */
/*   Updated: 2023/11/30 10:29:58 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*tab_a;

	if (argc == 1)
		return (1);
	tab_a = process_choice(argc, argv);
	if (!tab_a)
	{
		ft_printf("Error\n");
		return (1);
	}
	if (!is_sortable(tab_a))
		return (1);
	ft_sort(&tab_a);
	ft_listclear(&tab_a);
	return (0);
}
/* ft_printf("------Tableau A------\n");
t_stack	*current;
current = tab_a;
while (current)
{
	ft_printf("%d\n", current->content);
	current = current->next;
} */