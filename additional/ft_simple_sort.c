#include "../push_swap.h"

static void	ft_simple_sort(t_push **stack_master_a, t_push **stack_master_b)
{
	int	size;

	if (ft_check_if_is_sorted(stack_master_a)
		|| ft_lstsize_push(*stack_master_a) == 0
		|| ft_lstsize_push(*stack_master_a) == 1)
		return ;
	size = ft_lstsize_push(*stack_master_a);
	if (size == 2)
		sa(stack_master_a);
	else if (size == 3)
		ft_sort3(stack_master_a);
	else if (size == 4)
		ft_sort4(stack_master_a, stack_master_b);
	else if (size == 5)
		ft_sort5(stack_master_a, stack_master_b);
}
