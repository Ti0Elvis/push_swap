#include "push_swap.h"

int has_duplicates(t_stack *stack)
{
    t_stack *current;
    t_stack *runner;

    current = stack;
    while (current != NULL)
    {
        runner = current->next;
        while (runner != NULL)
        {
            if (current->value == runner->value)
                    return (1);
            runner = runner->next;
        }
        current = current->next;
    }
    return (0);
}

int	stack_size(t_stack *stack)
{
	int	count;

	count = 0;
	while (stack)
	{
		count++;
		stack = stack->next;
	}
	return (count);
}

int	is_sorted(t_stack *stack)
{
	while (stack && stack->next)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

t_stack *assign_indices(t_stack *stack)
{
	int index;
	t_stack	*runner;
	t_stack	*current;

	current = stack;
	while (current)
	{
		index = 0;
		runner = stack;
		while (runner)
		{
			if (runner->value < current->value)
				index++;
			runner = runner->next;
		}
		current->index = index;
		current = current->next;
	}
	return (stack);
}
