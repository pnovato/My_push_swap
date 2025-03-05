#include "../push_swap.h"

void	ft_lstaddfront_push(t_push **stack_master, t_push *n)
{
	n->next = *stack_master;
	*stack_master = n;
}
