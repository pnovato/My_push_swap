#include "push_swap.h"

int	pa(s_list **stack_a, s_list **stack_b)
{
	if (push(*stack_a, *stack_b) == -1)
		return (-1);
	ft_putendl_fd("pa", 1);
	return (0);
}

int	pb(s_list **stack_b, s_list **stack_a)
{
	if (push(*stack_b, *stack_a) == -1)
		return (-1);
	ft_putendl_fd("pb", 1);
	return (0);
}
