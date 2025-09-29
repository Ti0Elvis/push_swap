#include "src/push_swap.h"

// 1. check input - done
// 2. init stack - done

void print_stack(t_stack *stack)
{
    t_stack *current = stack;
    while (current)
    {
        printf("Value: %d\n", current->value);
        current = current->next;
    }
}

int main(int argc, char **argv)
{
    t_stack *stack_a;

    if (argc < 2)
        print_error("Missing arguments");
    if (!is_args_valid(argc, argv))
        print_error("Invalid arguments");
    stack_a = init_stack(&argv[1]);
    if (!stack_a)
        print_error("Failed to initialize stack");
    print_stack(stack_a);
    free_stack(stack_a);
    return (0);
}
