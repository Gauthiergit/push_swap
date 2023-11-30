/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 09:39:40 by gpeyre            #+#    #+#             */
/*   Updated: 2023/11/30 11:11:37 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
/* Les fonctions ici check (dans le cas d'une liste d'arg ou une chaine de
caractere en parametre) si il y a un nombre dans chaque element pour que le
atoi puisse fonctionner.

Il y a egalement des fonctions pour check les doublons. */

int	check_double_str(char **tab)
{
	int	j;
	int	i;

	i = 0;
	while (tab[i + 1])
	{
		j = i + 1;
		while (tab[j])
		{
			if (ft_atoi(tab[i]) == ft_atoi(tab[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_double_arg(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i + 1 < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	there_is_nb_str(char **tab)
{
	int	j;
	int	i;
	int	valid;

	i = 0;
	valid = 0;
	while (tab[i])
	{
		j = 0;
		valid = 1;
		while (tab[i][j])
		{
			if (tab[i][j] >= '0' && tab[i][j] <= '9')
				valid = 0;
			j++;
		}
		if (valid)
			return (1);
		i++;
	}
	return (0);
}

int	there_is_nb_arg(int argc, char **argv)
{
	int	j;
	int	i;
	int	valid;

	i = 1;
	valid = 0;
	while (i < argc)
	{
		j = 0;
		valid = 1;
		while (argv[i][j])
		{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
				valid = 0;
			j++;
		}
		if (valid)
			return (1);
		i++;
	}
	return (0);
}
