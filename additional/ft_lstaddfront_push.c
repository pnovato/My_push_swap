#include "push_swap.h"

void	ft_lstaddfront_push(s_list **stack_master, s_list *n)
{
	n->next = *stack_master;
	*stack_master = n;
}
