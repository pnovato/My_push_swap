#include "push_swap.h"


static int	ft_check_num(char *n)
{
	int	i;

	i = 0;
	if (n[i] == '-')
		i++;
	while (n[i])
	{
		if (!ft_isdigit(n[i])
			return (0);
		i++;
	}
	return (1);
}

static int	ft_validator(int n, char **av, int i)
{
	i++;
	while (av[i])
	{
		if (ft_atoi(av[i] == num)
			return (1);
		i++;
	}
	return (0);
}

void	ft_arg_validate(int ac, char **av)
{
	int	i;
	long	aux;
	char	**a;

	i = 0;
	if (ac == 2)
		a = ft_split(av[1], ' ');
	else
	{
		i = 1;
		a = av;
	}
	while (a[i])
	{
		aux = ft_atoi(a[i]);
		if (!ft_check_num(a[i]))
			ft_set_error("ERROR");
		if(ft_validator(aux, a, i))
			ft_set_error("ERROR");
		if (aux < -2147483648 || aux > 2147483647)
			ft_set_error("ERROR");
		i++;
	}
	if (ac == 2)
		ft_free(a);
}
