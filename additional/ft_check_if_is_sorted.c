#include "../push_swap.h"

int	ft_check_if_is_sorted(t_push **stack_master)
{
	t_push	*head;

	head = *stack_master;
	while (head && head->next)
	{
		if (head->value > head->next->value)
			return (0);
		head = head->next;
	}
	return (1);
}
