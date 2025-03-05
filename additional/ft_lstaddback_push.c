#include "../push_swap.h"

//function to add a node and it becomes the last node
void	ft_lstadd_back_push(t_push **stack_master, t_push *node)
{
	t_push	*aux;

	if (*stack_master)
	{
		aux = ft_lstlast(*stack_master);
		aux->next = node;
		node->next = NULL;
	}
	else
	{
		*stack_master = node;
		(*stack_master)->next = NULL;
	}
}
