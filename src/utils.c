#include "push_swap.h"

int ft_isspace(int c)
{
    return (c == ' ' || (c >= 9 && c <= 13));
}

int print_error(const char *str)
{
    ft_printf("Error\n%s\n", str);
    exit(EXIT_FAILURE);
    return (-1);
}
