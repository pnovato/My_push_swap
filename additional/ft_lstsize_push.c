#include "../push_swap.h"

//function to size the list
int	ft_lstsize_push(t_push *head)
{
	size_t	i;
	t_push	*aux;

	aux = head;
	i = 0;
	while (aux)
	{
		aux = aux->next;
		i++;
	}
	return (i);
}
