#include "push_swap.h"

static void	ft_sort4(s_list **stack_master_a, s_list **stack_master_b)
{
	int	d;

	if (ft_check_if_is_sorted(stack_master_a))
		return ;
	d = ft_dist(stack_master_a, ft_min(stack_master_a, -1));
	if (d == 1)
		ra(stack_master_a);
	else if (d == 2)
	{
		ra(stack_master_a);
		ra(stack_master_a);
	}
	else if (d == 3)
		rra(stack_master_a);
	if (ft_check_if_is_sorted(stack_master_a))
		return ;
	pb(stack_master_a, stack_master_b);
	ft_sort3(stack_master_a);
	pa(stack_master_a, stack_master_b);
}
