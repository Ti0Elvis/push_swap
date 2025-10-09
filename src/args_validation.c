/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_validation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evera <evera@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 16:15:25 by evera             #+#    #+#             */
/*   Updated: 2025/10/09 16:15:25 by evera            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_input_valid(char *input)
{
	int	i;

	i = 0;
	while (input[i] != '\0')
	{
		while (ft_isspace(input[i]))
			i++;
		if (input[i] == '-' || input[i] == '+')
			i++;
		if (input[i] < '0' || input[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	is_args_valid(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (argv[i][0] == '\0')
			return (0);
		if (!is_input_valid(argv[i]))
			return (0);
		i++;
	}
	return (1);
}
