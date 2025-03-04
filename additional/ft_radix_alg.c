#include "push_swap.h"

void	move_nodes(s_list **stacka, s_list **stackb, int i, int s)
{
	s_list	*head;
	int		j;

	j = 0;
	while (j < s)
	{
		head = *stacka;
		if ((head->index >> i) & 1)
			ra(stacka);
		else
			pb(stacka, stackb);
		j++;
	}
}

void	ft_radix_alg(s_list **stack_mastera, s_list **stack_masterb)
{
	int		i;
	int		s;
	int		max;

	s = ft_lstsize(stack_mastera);
	max = ft_max_bits(stack_mastera);
	i = 0;
	while (i < max)
	{
		move_nodes(stack_mastera, stack_masterb, i, s);
		while (stack_masterb)
			pa(stack_mastera, stack_masterb);
		i++;
	}
}
