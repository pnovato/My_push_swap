#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

typedef struct s_push
{
	int		value;
	int		index;
	struct s_list		*next;
}	t_push;

//movements logic
int		swap(t_push **a);
int		push(t_push **stack_destiny, t_push **stack_origin);
int		rotate(t_push **stack_master);
int		reverserotate(t_push **stack_master);

//swap movement
int		sa(t_push **stack_a);
int		sb(t_push **stack_b);
int		ss(t_push **stack_a, t_push **stack_b);

//push movement
int		pa(t_push **stack_a, t_push **stack_b);
int		pb(t_push **stack_b, t_push **stack_a);

//rotate movement
int		ra(t_push **stack_a);
int		rb(t_push **stack_b);
int		rr(t_push **stack_a, t_push **stack_b);

//reverseRotate movement
int		rra(t_push **stack_a);
int		rrb(t_push **stack_b);
int		rrr(t_push **stack_a, t_push **stack_b);

//ft_ac.c
void	ft_arg_validate(int ac, char **av);

//ft_all_sets.c
void	ft_print(t_push **stack, int ac, char **av);
void	print_checker_res(t_list **stack_a, t_list **stack_b);
int		main(int ac, char **av);

//ft_check_if_is_sorted.c
int		ft_check_if_is_sorted(t_push **stack_master);

//ft_dist.c
int		ft_dist(t_push **stack_master, int i);

//ft_error.c
void	ft_error(char *msg);

//ft_free.c
void	ft_free(char **str);

//ft_indexing.c
void	ft_index_stack(t_push **stack);

//ft_instrc.c
int		ft_instrc1(char *l, t_push **stack_masterA, t_push **stack_masterB);
int		ft_instrc2(char *l, t_push **stack_masterA, t_push **stack_masterB);
int		ft_instrc3(char *l, t_push **stack_masterA, t_push **stack_masterB);
int		ft_instrc4(char *l, t_push **stack_masterA, t_push **stack_masterB);
int		ft_do(char *l, t_push **stack_masterA, t_push **stack_masterB);

//ft_lstaddback_push.c
void	ft_lstadd_back_push(t_push **stack_master, t_push *node);

//ft_lstaddfront_push.c
void	ft_lstaddfront_push(t_push **stack_master, t_push *n);

//ft_lstsize_push.c
int		ft_lstsize_push(t_push *head);

//ft_radix_alg.c
void	move_nodes(t_push **stacka, t_push **stackb, int i, int s);
void	ft_radix_alg(t_push **stack_master_a, t_push **stack_master_b);

//ft_stack_master_free.c
void	ft_stack_master_free(t_push **stack_master);

//ft_top.c
void	ft_top(t_push **stack_master, int dist);

//printList.c
void	printList(t_push *head);

//main.c
int		main(int ac, char **av);

#endif
