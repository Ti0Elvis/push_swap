#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "./libft/libft.h"
#define INT_MAX 2147483647
#define INT_MIN -2147483648

typedef struct s_stack
{
    int value;
    struct s_stack *next;
}   t_stack;

// args_validation.c
int is_input_valid(char *input);
int is_args_valid(int argc, char **argv);

// init_stack.c
t_stack *init_stack(char **args);
t_stack *append_node(t_stack *stack, long value);

// free_memory.c
void free_split(char **split);
void free_stack(t_stack *stack);

// utils.c
int ft_isspace(int c);
int print_error(const char *str);

#endif
