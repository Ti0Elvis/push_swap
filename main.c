/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evera <evera@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 16:13:56 by evera             #+#    #+#             */
/*   Updated: 2025/10/09 16:14:04 by evera            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc < 2)
		print_error("Missing arguments");
	if (!is_args_valid(argc, argv))
		print_error("Invalid arguments");
	stack_a = init_stack(&argv[1]);
	if (!stack_a)
		print_error("Failed to initialize stack");
	if (has_duplicates(stack_a))
		return (free_stack(stack_a), print_error("Duplicates found"));
	stack_a = assign_indices(stack_a);
	stack_b = NULL;
	sort_stack(&stack_a, &stack_b);
	free_stack(stack_a);
	return (0);
}
