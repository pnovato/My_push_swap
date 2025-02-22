#include "push_swap.h"

int	ft_check_if_is_sorted(s_list **stack_master)
{
	s_list	*head;

	head = *stack_master;
	while (head && head->next)
	{
		if (head->value > head->next->value)
			return (0);
		head = head->next;
	}
	return (1);
}
