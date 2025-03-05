#include "../push_swap.h"

static void	execute(t_push **stack_master_a)
{
	sa(stack_master_a);
	rra(stack_master_a);
}

static void	handle_case(t_push **stack_master_a, int min, int next_min)
{
	t_push	*head;

	head = *stack_master_a;
	if ((head->index == min) && (head->next->index != next_min))
	{
		ra(stack_master_a);
		sa(stack_master_a);
		rra(stack_master_a);
	}
	else if (head->index == next_min)
	{
		if (head->next->index == min)
			sa(stack_master_a);
		else
			rra(stack_master_a);
	}
	else
	{
		if (head->next->index == min)
			ra(stack_master_a);
		else
			execute(stack_master_a);
	}
}

static void	ft_sort3(t_push **stack_master_a)
{
	int		min;
	int		next_min;

	if (ft_check_if_is_sorted(stack_master_a))
		return ;
	min = ft_min(stack_master_a, -1);
	next_min = ft_min(stack_master_a, min);
	handle_case(stack_master_a, min, next_min);
}
