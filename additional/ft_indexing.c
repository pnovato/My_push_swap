#include "../push_swap.h"

static t_push	*ft_get_next_min(t_push **stack)
{
	t_push	*head;
	t_push	*min;
	int		m;

	min = NULL;
	m = 0;
	head = *stack;
	if (head)
	{
		while (head)
		{
			if ((head->index == -1) && (!m || head->value < min->value))
			{
				min = head;
				m = 1;
			}
			head = head->next;
		}
	}
	return (min);
}

void	ft_index_stack(t_push **stack)
{
	t_push	*head;
	int		i;

	i = 0;
	head = ft_get_next_min(stack);
	while (head)
	{
		head->index = i++;
		head = ft_get_next_min(stack);
	}
}
