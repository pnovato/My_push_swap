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
