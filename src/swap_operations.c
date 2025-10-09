/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evera <evera@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 16:14:18 by evera             #+#    #+#             */
/*   Updated: 2025/10/09 16:14:21 by evera            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_no_print(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first = *stack;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
}

void	sa(t_stack **a)
{
	swap_no_print(a);
	ft_printf("sa\n");
}

void	sb(t_stack **b)
{
	swap_no_print(b);
	ft_printf("sb\n");
}

void	ss(t_stack **a, t_stack **b)
{
	swap_no_print(a);
	swap_no_print(b);
	ft_printf("ss\n");
}
