#include "push_swap.h"

t_stack *append_node(t_stack *stack, long value)
{
    t_stack *temp;
    t_stack *new_node;

    if (value < INT_MIN || value > INT_MAX)
        print_error("Value out of int range");
    new_node = (t_stack *)malloc(sizeof(t_stack));
    if (!new_node)
        return (NULL);
    new_node->value = (int)value;
    new_node->next = NULL;
    if (!stack)
        return (new_node);
    temp = stack;
    while (temp->next)
        temp = temp->next;
    temp->next = new_node;
    return (stack);
}

t_stack *init_stack(char **numbers)
{
    int i;
    int j;
    char **split;
    t_stack *stack;

    i = 0;
    stack = NULL;
    while (numbers[i])
    {
        split = ft_split(numbers[i], ' ');
        if (!split)
            return (free_stack(stack), NULL);
        j = 0;
        while (split[j])
        {
            stack = append_node(stack, ft_atoi(split[j]));
            if (!stack)
                return (free_split(split), free_stack(stack), NULL);
            j++;
        }
        free_split(split);
        i++;
    }
    return (stack);
}
