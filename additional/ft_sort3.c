#include "push_swap.h"

static void	execute(s_list **stack_master_a)
{
	sa(stack_master_a);
	rra(stack_master_a);
}

static void	ft_sort3(s_list **stack_master_a)
{
	s_list	*head;
	int	min;
	int	next_min;

	head = *stack_master_a;
	min = ft_min(stack_master_a, -1);
	next_min = ft_min(stack_master_a, min)
	if (ft_check_if_is_sorted(stack_master_a))
		return;
	if (head->index == min && head->next->index != next_min)
	{
		ra(stack_master_a);
		sa(stack_master_a);
		rra(stack_master_a);
	}
	else if (head->index == next_min)
	{
		if (head->next->index == min) ? sa(stack_master_a) : rra(stack_master_a);
	}
	else
	{
		if (head->next->index == min) ? ra(stack_master_a) : execute(stack_master_a);
}
