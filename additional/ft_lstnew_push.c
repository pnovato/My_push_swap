#include "../push_swap.h"

//function to creat a node
t_push	*ft_lstnew_push(int value)
{
	t_push	*node;

	node = (t_push *)malloc(sizeof(*node));
	if (!node)
		return (NULL);
	node->value = value;
	node->index = -1;
	node->next = NULL;
	return (node);
}
