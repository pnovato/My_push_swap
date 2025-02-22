#include "push_swap.h"

void	ft_stack_master_free(s_list **stack_master)
{
	s_list	*head;
	s_list	*aux;

	head = *stack_master;
	while (head)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
	free(stack_master);
}
