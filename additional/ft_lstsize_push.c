#include "push_swap.h"

//function to size the list
int	ft_lstsize_push(s_list *head)
{
	size_t	i;
	s_list	*aux;

	aux = head;
	i = 0;
	while (aux)
	{
		aux = aux->next;
		i++;
	}
	return (i);
}
