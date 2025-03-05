#include "../push_swap.h"

int	ft_dist(t_push	**stack_master, int i)
{
	t_push	*head;
	int		dist;

	head = *stack_master;
	dist = 0;
	while (head)
	{
		if (head->index == i)
			break ;
		dist++;
		head = head->next;
	}
	return (dist);
}
