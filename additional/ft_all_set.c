#include "../push_swap.h"

void	ft_print(t_push **stack, int ac, char **av)
{
	t_push	*n;
	char	**arg;
	int		i;

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
		ft_lstadd_back_push(stack, n);
		i++;
	}
	ft_index_stack(stack);
	if (ac == 2)
		ft_free(arg);
}

void	print_checker_res(t_list **stack_a, t_list **stack_b)
{
	if (is_sorted(stack_a))
		ft_putendl_fd("OK\n", 1);
	else
		ft_putendl_fd("KO\n", 1);
	if (*stack_a)
		free_stack(stack_a);
	if (*stack_b)
		free_stack(stack_b);
}

int	main(int ac, char **av)
{
	t_push	**stack_mastera;
	t_push	**stack_masterb;
	char	*l;

	if (ac < 2)
		return (0);
	stack_mastera = (t_push **)malloc(sizeof(t_push));
	stack_masterb = (t_push **)malloc(sizeof(t_push));
	*stack_mastera = NULL;
	*stack_masterb = NULL;
	ft_arg_validate(ac, av);
	ft_print(stack_mastera, ac, av);
	while (get_next_line(0, &l))
		ft_do(l, stack_mastera, stack_masterb);
	print_checker_res(stack_mastera, stack_masterb);
	return (0);
}
