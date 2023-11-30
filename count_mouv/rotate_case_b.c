/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_case_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:49:17 by gpeyre            #+#    #+#             */
/*   Updated: 2023/11/30 11:34:12 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
/* Cette fonction calcule le nb de rotations inverse minimum dans chacune des
listes pour pouvoir deplacer un nb de la liste A a la bonne place dans la
liste B. */

int	ft_case_rrarrb(t_stack **tab_a, t_stack **tab_b, int nb)
{
	int	mouv_nb;

	mouv_nb = 0;
	if (find_place_b(*tab_b, nb))
		mouv_nb = ft_listsize(*tab_b) - find_place_b(*tab_b, nb);
	if (mouv_nb < (ft_listsize(*tab_a) - find_index(*tab_a, nb)))
		mouv_nb = ft_listsize(*tab_a) - find_index(*tab_a, nb);
	return (mouv_nb);
}
/* Cette fonction calcule le nb de rotations minimum dans chacune des
listes pour pouvoir deplacer un nb de la liste A a la bonne place dans la
liste B. */

int	ft_case_rarb(t_stack **tab_a, t_stack **tab_b, int nb)
{
	int	mouv_nb;

	mouv_nb = find_place_b(*tab_b, nb);
	if (mouv_nb < find_index(*tab_a, nb))
		mouv_nb = find_index(*tab_a, nb);
	return (mouv_nb);
}
/* Cette fonction calcule le nb de rotations minimum dans la liste A
qui s'ajoute au nombre de rotations inverse minimum dans la liste B pour pouvoir
deplacer un nb de la liste A a la bonne place dans la liste B */

int	ft_case_rarrb(t_stack **tab_a, t_stack **tab_b, int nb)
{
	int	mouv_nb;

	mouv_nb = 0;
	if (find_place_b(*tab_b, nb))
		mouv_nb = ft_listsize(*tab_b) - find_place_b(*tab_b, nb);
	mouv_nb = find_index(*tab_a, nb) + mouv_nb;
	return (mouv_nb);
}
/* Cette fonction calcule le nb de rotations inverse minimum dans la liste A
qui s'ajoute au nombre de rotations minimum dans la liste B pour pouvoir
deplacer un nb de la liste A a la bonne place dans la liste B */

int	ft_case_rrarb(t_stack **tab_a, t_stack **tab_b, int nb)
{
	int	mouv_nb;

	mouv_nb = 0;
	if (find_index(*tab_a, nb))
		mouv_nb = ft_listsize(*tab_a) - find_index(*tab_a, nb);
	mouv_nb = find_place_b(*tab_b, nb) + mouv_nb;
	return (mouv_nb);
}
