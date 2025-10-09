#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "./libft/libft.h"
#define INT_MAX 2147483647
#define INT_MIN -2147483648

typedef struct s_stack
{
    int value;
    int index;
    struct s_stack *next;
}   t_stack;

// args_validation.c
int is_input_valid(char *input);
int is_args_valid(int argc, char **argv);

// free_memory.c
void free_split(char **split);
void free_stack(t_stack *stack);

// init_stack.c
t_stack *init_stack(char **args);
t_stack *append_node(t_stack *stack, long value);

// push_operations.c
void pa(t_stack **a, t_stack **b);
void pb(t_stack **a, t_stack **b);
void push_no_print(t_stack **src, t_stack **dst);

// radix_sort.c
int get_max_bits(int size);
void radix_sort(t_stack **a, t_stack **b);
void process_bit_pass(t_stack **a, t_stack **b, int bit, int size);

// reverse_rotate_operations.c
void rra(t_stack **a);
void rrb(t_stack **b);
void rrr(t_stack **a, t_stack **b);
void reverse_rotate_no_print(t_stack **stack);

// rotate_operations.c
void ra(t_stack **a);
void rb(t_stack **b);
void rr(t_stack **a, t_stack **b);
void rotate_no_print(t_stack **stack);

// sort_stack.c
void sort_two(t_stack **a);
void sort_three(t_stack **a);
int get_min_pos(t_stack *stack);
void sort_five(t_stack **a, t_stack **b);
void sort_stack(t_stack **a, t_stack **b);

// stack_utils.c
int is_sorted(t_stack *stack);
int stack_size(t_stack *stack);
int has_duplicates(t_stack *stack);
t_stack *assign_indices(t_stack *stack);

// swap_operations.c
void sa(t_stack **a);
void sb(t_stack **b);
void ss(t_stack **a, t_stack **b);
void swap_no_print(t_stack **stack);

// utils.c
int ft_isspace(int c);
int print_error(const char *str);

#endif
