#include "push_swap.h"

//function to return the last node of the list
s_list	*ft_lstlast_push(s_list *head)
{
	s_list	*aux;

	aux = head;
	while (aux->next)
	{
		aux = aux->next;
		if (aux->next == NULL)
			return (aux);
	}
	return (aux);
}
