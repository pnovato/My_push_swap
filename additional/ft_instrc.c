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
	return (1);
}

int	ft_instrc2(char *l, s_list **stack_masterA, s_list **stack_masterB)
{
	if (!(ft_strcmp(l,"pa")))
	{
		push(stack_masterA, stack_masterB);
		return (0);
	}
	if (!(ft_strcmp(l,"pb")))
	{
		push(stack_masterB, stack_masterB);
		return (0);
	}
	return (1);
}

int	ft_instrc3(char *l, s_list **stack_masterA, s_list **stack_masterB)
{
	if (!(ft_strcmp(l,"ra")))
	{
		rotate(stack_masterA);
		return (0);
	}
	if (!(ft_strcmp(l,"rb")))
	{
		rotate(stack_masterB);
		return (0);
	}
	if (!(ft_strcmp(l,"rr")))
	{
		rotate(stack_masterA);
		rotate(stack_masterB);
		return (0);
	}
	return (1);
}

int	ft_instrc4(char *l, s_list **stack_masterA, s_list **stack_masterB)
{
	if (!(ft_strcmp(l,"rra")))
	{
		reverseRotate(stack_masterA);
		return (0);
	}
	if (!(ft_strcmp(l,"rrb")))
	{
		reverseRotate(stack_masterB);
		return (0);
	}
	if (!(ft_strcmp(l,"rrr")))
	{
		reverseRotate(stack_masterA);
		reverseRotate(stack_masterB);
		return (0);
	}
	return (1);
}

int	ft_do(char *l, s_list **stack_masterA, s_list **stack_masterB)
{
	if (ft_instrc1(l, stack_masterA, stack_masterB)
	{
		ft_error("ERROR");
		return (-1);
	}
	else if (ft_instrc2(l, stack_masterA, stack_masterB)
	{
		ft_error("ERROR");
		return (-1);
	}
	else if (ft_instrc3(l, stack_masterA, stack_masterB)
	{
		ft_errro("ERROR");
		return (-1);
	}
	else if (ft_instrc4(l, stack_masterA, stack_masterB)
	{
		ft_error("ERROR");
		return (-1);
	}
	free(l);
}
