/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:53:11 by gpeyre            #+#    #+#             */
/*   Updated: 2023/11/30 11:54:09 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "printf/ft_printf.h"
# include "libft/libft.h"

//structure de listes chainees
typedef struct s_stack
{
	int					content;
	int					index;
	struct s_stack		*next;
}						t_stack;

//gestion de listes chainees
t_stack	*ft_listnew(int content, int index);
void	ft_listadd_front(t_stack **lst, t_stack *new);
void	ft_listadd_back(t_stack **lst, t_stack *new);
void	ft_listclear(t_stack **lst);
void	clean_index(t_stack **tab);
int		ft_listsize(t_stack *lst);
t_stack	*ft_listlast(t_stack *lst);

//fonctions utiles pour sort
void	ft_sort(t_stack **tab_a);
void	sort_three(t_stack **tab);
void	final_sort(t_stack **tab_a);
int		is_sortable(t_stack *tab);
int		find_max(t_stack *tab);
int		find_min(t_stack *tab);
int		find_index(t_stack *tab, int nb);
int		find_place_b(t_stack *tab_b, int nb);
int		find_place_a(t_stack *tab_a, int nb);

//Fonctions de comptage des mouvements
int		min_rotate_b(t_stack **tab_a, t_stack **tab_b);
int		min_rotate_a(t_stack **tab_a, t_stack **tab_b);
int		ft_case_rrarrb(t_stack **tab_a, t_stack **tab_b, int nb);
int		ft_case_rarb(t_stack **tab_a, t_stack **tab_b, int nb);
int		ft_case_rarrb(t_stack **tab_a, t_stack **tab_b, int nb);
int		ft_case_rrarb(t_stack **tab_a, t_stack **tab_b, int nb);
int		ft_case_rrarrb_a(t_stack **tab_a, t_stack **tab_b, int nb);
int		ft_case_rarb_a(t_stack **tab_a, t_stack **tab_b, int nb);
int		ft_case_rarrb_a(t_stack **tab_a, t_stack **tab_b, int nb);
int		ft_case_rrarb_a(t_stack **tab_a, t_stack **tab_b, int nb);

//choix du mouvement et affichage
int		display_and_push_rrarrb(t_stack **tab_a, t_stack **tab_b, int nb);
int		display_and_push_rarb(t_stack **tab_a, t_stack **tab_b, int nb);
int		display_and_push_rarrb(t_stack **tab_a, t_stack **tab_b, int nb);
int		display_and_push_rrarb(t_stack **tab_a, t_stack **tab_b, int nb);
int		display_and_push_rrarrb_a(t_stack **tab_a, t_stack **tab_b, int nb);
int		display_and_push_rarb_a(t_stack **tab_a, t_stack **tab_b, int nb);
int		display_and_push_rrarb_a(t_stack **tab_a, t_stack **tab_b, int nb);
int		display_and_push_rarrb_a(t_stack **tab_a, t_stack **tab_b, int nb);

//gestion d'erreur
int		check_error_arg(int argc, char **argv);
int		check_error_str(char **tab);
int		check_double_str(char **tab);
int		check_double_arg(int argc, char **argv);
int		there_is_nb_str(char **tab);
int		there_is_nb_arg(int argc, char **argv);

//Choix du process
t_stack	*process_choice(int argc, char **argv);
t_stack	*process_str(char **argv);

//instructions
void	push_b(t_stack **a, t_stack **b);
void	push_a(t_stack **a, t_stack **b);
void	swap(t_stack **tab);
void	rotate(t_stack **tab);
void	rotate_both(t_stack **a, t_stack **b);
void	rev_rotate(t_stack **tab);
void	rev_rotate_both(t_stack **a, t_stack **b);

#endif
