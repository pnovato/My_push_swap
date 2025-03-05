#include "../push_swap.h"

//function to return the last node of the list
t_push	*ft_lstlast_push(t_push *head)
{
	t_push	*aux;

	aux = head;
	while (aux->next)
	{
		aux = aux->next;
		if (aux->next == NULL)
			return (aux);
	}
	return (aux);
}
