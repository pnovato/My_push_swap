#include "push_swap.h"

static int	ft_min(s_list **stack_master, int value)
{
	s_list	*head;
	int		min;

	head = *stack_master;
	min = head->index;
	while (head->next)
	{
		head = head->next;
		if ((head->index < min) && head->index != value)
			min = head->index;
	}
	return (min);
}
