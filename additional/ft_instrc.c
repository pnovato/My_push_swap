#include "push_swap.h"

int	ft_instrc1(char *l, s_list **stack_mastera, s_list **stack_masterb)
{
	if (!(ft_strcmp(l, "sa")))
	{
		swap(stack_mastera);
		return (0);
	}
	if (!(ft_strcmp(l, "sb")))
	{
		swap(stack_masterb);
		return (0);
	}
	if (!(ft_strcmp(l, "ss")))
	{
		swap(stack_mastera);
		swap(stack_masterb);
		return (0);
	}
	return (1);
}

int	ft_instrc2(char *l, s_list **stack_mastera, s_list **stack_masterb)
{
	if (!(ft_strcmp(l, "pa")))
	{
		push(stack_mastera, stack_masterb);
		return (0);
	}
	if (!(ft_strcmp(l, "pb")))
	{
		push(stack_masterb, stack_mastera);
		return (0);
	}
	return (1);
}

int	ft_instrc3(char *l, s_list **stack_mastera, s_list **stack_masterb)
{
	if (!(ft_strcmp(l, "ra")))
	{
		rotate(stack_mastera);
		return (0);
	}
	if (!(ft_strcmp(l, "rb")))
	{
		rotate(stack_masterb);
		return (0);
	}
	if (!(ft_strcmp(l, "rr")))
	{
		rotate(stack_mastera);
		rotate(stack_masterb);
		return (0);
	}
	return (1);
}

int	ft_instrc4(char *l, s_list **stack_mastera, s_list **stack_masterb)
{
	if (!(ft_strcmp(l, "rra")))
	{
		reverserotate(stack_mastera);
		return (0);
	}
	if (!(ft_strcmp(l, "rrb")))
	{
		reverserotate(stack_masterb);
		return (0);
	}
	if (!(ft_strcmp(l, "rrr")))
	{
		reverserotate(stack_mastera);
		reverserotate(stack_masterb);
		return (0);
	}
	return (1);
}

int	ft_do(char *l, s_list **stack_mastera, s_list **stack_masterb)
{
	if (ft_instrc1(l, stack_mastera, stack_masterb))
	{
		ft_error("ERROR");
		return (-1);
	}
	else if (ft_instrc2(l, stack_mastera, stack_masterb))
	{
		ft_error("ERROR");
		return (-1);
	}
	else if (ft_instrc3(l, stack_mastera, stack_masterb))
	{
		ft_errro("ERROR");
		return (-1);
	}
	else if (ft_instrc4(l, stack_mastera, stack_masterb))
	{
		ft_error("ERROR");
		return (-1);
	}
	free(l);
}
