/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:56:27 by gpeyre            #+#    #+#             */
/*   Updated: 2023/11/30 11:10:54 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
/* Ces fonction check les erreurs suivante dans le cas d'une liste d'arg
ou d'une chaine de caractere:
- pas de nombre dans l'argument;
- respect des overflow d'un int;
- doublon dans la liste */

int	check_error_arg(int argc, char **argv)
{
	int			i;
	long int	nb;

	if (there_is_nb_arg(argc, argv))
		return (1);
	i = 1;
	while (i < argc)
	{
		nb = ft_atoi(argv[i]);
		if (nb > 2147483647 || nb < -2147483648)
			return (1);
		i++;
	}
	if (check_double_arg(argc, argv))
		return (1);
	return (0);
}

int	check_error_str(char **tab)
{
	int			i;
	long int	nb;

	if (there_is_nb_str(tab))
		return (1);
	i = 0;
	while (tab[i])
	{
		nb = ft_atoi(tab[i]);
		if (nb > 2147483647 || nb < -2147483648)
			return (1);
		i++;
	}
	if (check_double_str(tab))
		return (1);
	return (0);
}
