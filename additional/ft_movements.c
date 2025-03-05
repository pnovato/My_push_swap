include "../push_swap.h"

int	swap(t_push **a)
{
	t_push	*head;
	t_push	*next;
	int		aux_value;
	int		aux_index;

	if (ft_lstsize(*a) < 2)
		return (-1);
	head = *a;
	next = a->next;
	if (!head && !next)
		ft_error("Error while swapping!");
	aux_value = a->value;
	aux_index = a->index;
	a->value = next->value;
	a->index = next->index;
	next->value = aux_value;
	next->index = aux_index;
	return (0);
}

int	push(t_push **stack_destiny, t_push **stack_origin)
{
	t_push	*temp;
	t_push	*head_destiny;
	t_push	*head_origin;

	if (ft_lstsize(*stack_origin) == 0)
		return (-1);
	head_destiny = stack_destiny;
	head_origin = stack_origin;
	temp = stack_origin;
	head_origin = head_origin->next;
	*stack_origin = head_origin;
	if (!head_destiny)
	{
		head_destiny = temp;
		head_destiny->next = NULL;
		*stack_destiny = head_destiny;
	}
	else
	{
		temp->next = head_destiny;
		*stack_destiny = temp;
	}
	return (0);
}

int	rotate(t_push **stack_master)
{
	t_push	*head;
	t_push	*tail;

	if (ft_lstsize(*stack_master) == 0)
		return (-1);
	head = *stack;
	tail = ft_lstlast(head);
	*stack_master = head->next;
	head->next = NULL;
	tail->next = head;
	return (0);
}

int	reverserotate(t_push **stack_master)
{
	t_push	*head;
	t_push	*tail;

	if (ft_lstsize(*stack_master) < 2)
		return (-1);
	head = *stack_master;
	tail = ft_lstlast(head);
	while (head)
	{
		if (head->next->next == NULL)
		{
			head->next = NULL;
			break ;
		}
		head = head->next;
	}
	tail->next = *stack;
	*stack = tail;
	return (0);
}
