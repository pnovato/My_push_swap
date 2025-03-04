#include "push_swap.h"

static void	instack(t_list **stack, int ac, char **av)
{
	s_lit	*n;
	char	**args;
	int		i;

	i = 0;
	if (ac == 2)
		args = ft_split(av[1], '');
	else
	{
		i = 1;
		args = av;
	}
	while (args[i])
	{
		n = ft_lstnew_push(ft_atoi(args[i]));
		ft_lstadd_back(stack, n);
		i++;
	}
	ft_index_stack(stack);
	if (ac == 2)
		ft_free(args);
}

static void	sort_stack(t_list **stackA, t_list **stackB)
{
	if (ft_lstsize_push(*stackA) <= 5)
		simple_sort(stackA, stackB);
	else
		radix_sort(stackA, stackB);
}

int	main(int ac, char **av)
{
	t_list	**stacka;
	t_list	**stackb;

	if (ac < 2)
		return (-1);
	ft_arg_validate(ac, av);
	stackA = (t_list **)malloc(sizeof(t_list));
	stackB = (t_list **)malloc(sizeof(t_list));
	*stackA = NULL;
	*stackB = NULL;
	inStack(stackA, ac, av);
	if (ft_cheack_if_is_sorted(stackA))
	{
		ft_stack_master_free(stackA);
		ft_stack_master_free(stackB);
		return (0);
	}
	sort_stack(stackA, stackB);
	ft_stack_master_free(stackA);
	ft_stack_master_free(stackB);
	return (0);
}
