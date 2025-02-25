#include "push_swap.h"


int	ft_instrc1(char *l, s_list **stack_masterA, s_list **stack_masterB)
{
	if (!(ft_strcmp(l, "sa")))
	{
		swap(stack_masterA);
		return (0);
	}
	if (!(ft_strcmp(l, "sb")))
	{
		swap(stack_masterB);
		return (0);
	}
	if (!(ft_strcmp(l, "ss")))
	{
		swap(stack_masterA);
		swap(stack_masterB);
		return (0);
	}
}

int	ft_instrc2(char *l, s_list **stack_masterA, s_list **stack_masterB)
{
	
}
