#include "push_swap.h"

// function to print list
void	printList(s_list *head)
{
	t_list *aux;

	aux = head;
	while (aux != NULL)
	{
		ft_putnbr_fd(aux->value, 1);
		ft_putendl_fd("",1);
		aux = aux->next;
	}
}
