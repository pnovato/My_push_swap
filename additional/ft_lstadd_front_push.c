#include "push_swap.h"

//function to add a node and it becomes the last node
void	ft_lstadd_back_push(s_list **stack_master, s_list *node)
{
	s_list	*aux;

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
