#include "../push_swap.h"

static int	ft_min(t_push **stack_master, int value)
{
	t_push	*head;
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
