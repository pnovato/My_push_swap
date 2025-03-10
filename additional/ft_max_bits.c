#include "../push_swap.h"

static int	ft_max_bits(t_push **stack_master)
{
	t_push	*head;
	int		max;
	int		max_bits;

	head = *stack_master;
	max = head->index;
	max_bits = 0;
	while (head)
	{
		if (head->index > max)
			max = head->index;
		head = head->next;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}
