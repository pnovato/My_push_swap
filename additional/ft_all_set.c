#include "push_swap"

void	ft_print(s_list **stack, int ac, char **av)
{
	s_list	*n;
	char	**arg;
	int	i;

	i = 0;
	if (ac == 2)
		arg = ft_split(av[1], ' ');
	else
	{
		i = 1;
		arg = av;
	}
	while (arg[i])
	{
		n = ft_lstnew_push(ft_atoi(arg[i]));
		ft_lstadd_back_push(stack,n);
		i++;
	}
	ft_index_stack(stack);
	if (ac == 2)
		ft_free(arg);
}

int	main(int ac, char **av)
{
	s_list	**stack_masterA;
	s_list	**stack_masterB;
	char	*l;

	if (ac < 2)
		return (0);
	stack_masterA = (s_list **)malloc(sizeof(s_list));
	stack_masterB = (s_list **)malloc(sizeof(s_list));
	*stack_masterA = NULL;
	*stack_masterB = NULL;
	ft_arg_validate(ac, av);
	while (get_next_line(0, &l))
		ft_do(l, stack_masterA, stack_masterB);
	ft_print(stack_masterA, stack_masterB);
	return (0);
}
