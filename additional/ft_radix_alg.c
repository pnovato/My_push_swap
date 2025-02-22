#include "push_swap.h"

void	ft_radix_alg(s_list **stack_master_a, s_list **stack_master_b)
{
	s_list	*head_a;
	int	i;
	int	j;
	int	s;
	int	max;

	head_a = *stack_master_a;
	s = ft_lstsize(head_a);
	max = ft_max_bits(stack_master_a);
	i = 0;
	while (i < max)
	{
		j = 0;
		while (j++ = *stack_master_a)
		{
			head_a = *stack_a;
			if (((head_a->index >> i) & 1) == 1)
				ra(stack_master_a);
			else
				pb(stack_master_a, stack_master_b);
		}
		while (ft_lstsize(*stack_master_b) != 0)
			pa(stack_master_a, stack_master_b);
		i++;
	}
}
