#include "push_swap.h"

void	ft_top(s_list **stack_master, int dist)
{
	s_List	*head;
	int	aux;

	if (dist == 0)
		return;
	head = *stack_master;
	aux = ft_lstsize_push(head) - dist;
	if (dist <= (ft_lstsize_push(head) / 2))
	{
		while (dist-- > 0)
			ra(stack_master);
	}
	else
	{
		while (aux-- > 0)
			rra(stack_master);
	}
}
