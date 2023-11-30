/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:48:33 by gpeyre            #+#    #+#             */
/*   Updated: 2023/11/30 11:18:36 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
/* Cette fonction calcule le nombre de rotations minimum pour deplacer un nb
de la liste a vers la list b a une place ordonnee. On parcours donc tous les
nombres de la liste a pour cela. Le but est d'ordonnee dans la liste b de maniere
decroissante */

int	min_rotate_b(t_stack **tab_a, t_stack **tab_b)
{
	int		mouv_nb;
	t_stack	*current;

	current = *tab_a;
	mouv_nb = ft_case_rrarrb(tab_a, tab_b, current->content);
	while (current)
	{
		if (mouv_nb > ft_case_rarb(tab_a, tab_b, current->content))
			mouv_nb = ft_case_rarb(tab_a, tab_b, current->content);
		if (mouv_nb > ft_case_rrarrb(tab_a, tab_b, current->content))
			mouv_nb = ft_case_rrarrb(tab_a, tab_b, current->content);
		if (mouv_nb > ft_case_rarrb(tab_a, tab_b, current->content))
			mouv_nb = ft_case_rarrb(tab_a, tab_b, current->content);
		if (mouv_nb > ft_case_rrarb(tab_a, tab_b, current->content))
			mouv_nb = ft_case_rrarb(tab_a, tab_b, current->content);
		current = current->next;
	}
	return (mouv_nb);
}
/* Cette fonction calcule le nombre de rotations minimum pour deplacer un nb
de la liste b vers la list a a une place ordonnee. On parcours donc tous les
nombres de la liste b pour cela. Le but est d'ordonnee dans la liste a de maniere
croissante */

int	min_rotate_a(t_stack **tab_a, t_stack **tab_b)
{
	int		mouv_nb;
	t_stack	*current;

	current = *tab_b;
	mouv_nb = ft_case_rrarrb_a(tab_a, tab_b, current->content);
	while (current)
	{
		if (mouv_nb > ft_case_rarb_a(tab_a, tab_b, current->content))
			mouv_nb = ft_case_rarb_a(tab_a, tab_b, current->content);
		if (mouv_nb > ft_case_rrarrb_a(tab_a, tab_b, current->content))
			mouv_nb = ft_case_rrarrb_a(tab_a, tab_b, current->content);
		if (mouv_nb > ft_case_rarrb_a(tab_a, tab_b, current->content))
			mouv_nb = ft_case_rarrb_a(tab_a, tab_b, current->content);
		if (mouv_nb > ft_case_rrarb_a(tab_a, tab_b, current->content))
			mouv_nb = ft_case_rrarb_a(tab_a, tab_b, current->content);
		current = current->next;
	}
	return (mouv_nb);
}
