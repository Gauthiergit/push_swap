/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_choice.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:56:49 by gpeyre            #+#    #+#             */
/*   Updated: 2023/11/30 12:36:53 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*process_str(char **argv);
/* Fonction qui initialise la liste A en fonction de ce qui est donne en
parametre de l'executable; une liste d'argument ou une chaines de caracteres.*/

t_stack	*process_choice(int argc, char **argv)
{
	t_stack	*tab_a;
	t_stack	*current;
	int		i;

	if (argc < 2)
		return (NULL);
	if (argc > 2)
	{
		if (check_error_arg(argc, argv))
			return (NULL);
		i = 1;
		tab_a = NULL;
		while (i < argc)
		{
			current = ft_listnew(ft_atoi(argv[i]), i - 1);
			ft_listadd_back(&tab_a, current);
			i++;
		}
	}
	else
		tab_a = process_str(argv);
	return (tab_a);
}

t_stack	*process_str(char **argv)
{
	char	**temp;
	t_stack	*tab_a;
	t_stack	*current;
	int		i;

	temp = ft_split(argv[1], ' ');
	if (check_error_str(temp))
		return (NULL);
	i = 0;
	tab_a = NULL;
	while (temp[i])
	{
		current = ft_listnew(ft_atoi(temp[i]), i);
		ft_listadd_back(&tab_a, current);
		i++;
	}
	i = 0;
	while (temp[i])
	{
		free(temp[i]);
		i++;
	}
	free(temp);
	return (tab_a);
}
