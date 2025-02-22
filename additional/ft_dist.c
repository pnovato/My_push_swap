#include "push_swap.h"

int	ft_dist(s_list	**stack_master, int i)
{
	s_list	*head;
	int	dist;

	head = *stack_master;
	dist = 0;
	while (head)
	{
		if (head->index == i)
			break;
		dist++;
		head = head->next;
	}
	return (dist);
}
