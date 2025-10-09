#include "push_swap.h"

int get_max_bits(int size)
{
	int	max_bits;

	max_bits = 0;
	while (((size - 1) >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void process_bit_pass(t_stack **a, t_stack **b, int bit, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if ((((*a)->index >> bit) & 1) == 0)
			pb(a, b);
		else
			ra(a);
		i++;
		if (!*a)
			break ;
	}
	while (*b)
		pa(a, b);
}

void radix_sort(t_stack **a, t_stack **b)
{
	int	size;
	int	max_bits;
	int	bit;

	if (!a || !*a)
		return ;
	size = stack_size(*a);
	if (size < 2 || is_sorted(*a))
		return ;
	assign_indices(*a);
	max_bits = get_max_bits(size);
	bit = 0;
	while (bit < max_bits)
	{
		process_bit_pass(a, b, bit, size);
		bit++;
	}
}
