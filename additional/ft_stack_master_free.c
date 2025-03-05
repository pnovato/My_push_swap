#include "../push_swap.h"

void	ft_stack_master_free(t_push **stack_master)
{
	t_push	*head;
	t_push	*aux;

	head = *stack_master;
	while (head)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
	free(stack_master);
}
