#include "push_swap.h"

//function to creat a node
s_list	*ft_lstnew_push(int value)
{
	s_list	*node;
	new = (s_list *)malloc(sizeof(*node));
	
	if (!node)
		return (NULL);
	node->value = value;
	node->index = -1;
	node->next = NULL;
	return (node);
}

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


//function to add a node and it becomes the head
void	ft_lstadd_front_push(s_list **stack_master, s_list *node)
{
	node->next = *stack_master;
	*stack_master = node;
}

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
