#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

typedef struct s_list
{
	int		value;
	int		index;
	struct s_list	*next;
}	t_list;

//movements logic
void	swap(t_list **a);
int		push(t_list **stack_destiny, t_list **stack_origin);
int		rotate(t_list **stack_master);
int		reverserotate(t_list **stack_master);

//swap movement
int		sa(t_list **stack_a);
int		sb(t_list **stack_b);
int		ss(t_list **stack_a, t_list **stack_b);

//push movement
int		pa(t_list **stack_a, t_list **stack_b);
int		pb(t_list **stack_b, t_list **stack_a);

//rotate movement
int		ra(t_list **stack_a);
int		rb(t_list **stack_b);
int		rr(t_list **stack_a, t_list **stack_b);

//reverseRotate movement
int		rra(t_list **stack_a);
int		rrb(t_list **stack_b);
int		rrr(t_list **stack_a, t_list **stack_b);

//ft_ac.c
static int	ft_check_num(char *n);
static	int		ft_validator(int n, char **av, int i);
void	ft_arg_validate(int ac, char **av);

//ft_all_sets.c
void	ft_print(t_list **stack, int ac, char **av);
int		main(int ac, char **av);

//ft_check_if_is_sorted.c
int		ft_check_if_is_sorted(t_list **stack_master);

//ft_dist.c
int		ft_dist(t_list	**stack_master, int i);

//ft_error.c
void	ft_error(char *msg);

//ft_free.c
void	ft_free(char **str);

//ft_indexing.c
static s_List	*ft_get_next_min(t_list **stack);
void	ft_index_stack(t_list **stack);

//ft_instrc.c
int		ft_instrc1(char *l, t_list **stack_masterA, t_list **stack_masterB);
int		ft_instrc2(char *l, t_list **stack_masterA, t_list **stack_masterB);
int		ft_instrc3(char *l, t_list **stack_masterA, t_list **stack_masterB);
int		ft_instrc4(char *l, t_list **stack_masterA, t_list **stack_masterB);
int		ft_do(char *l, t_list **stack_masterA, t_list **stack_masterB);

//ft_lstaddback_push.c
void	ft_lstadd_back_push(t_list **stack_master, t_list *node);

//ft_lstaddfront_push.c
void	ft_lstaddfront_push(t_list **stack_master, t_list *n);

//ft_lstlast_push.c
t_list	*ft_lstlast_push(t_list *head);

//ft_lstsize_push.c
int		ft_lstsize_push(t_list *head);

//ft_max_bits.c
static int		ft_max_bits(t_list **stack_master);

//ft_min.c
static int		ft_min(t_list **stack_master, int value);

//ft_radix_alg.c
void	move_nodes(t_list **stacka, t_list **stackb, int i, int s);
void	ft_radix_alg(t_list **stack_master_a, t_list **stack_master_b);

//ft_simple_sort.c
static void	ft_simple_sort(t_list **stack_master_a, t_list **stack_master_b);

//ft_sort3.c
static void	execute(t_list **stack_master_a);
static void	handle_case(t_list **stack_master_a, int min, int next_min);
static void	ft_sort3(t_list **stack_master_a);

//ft_sort4.c
static void	ft_sort4(t_list **stack_master_a, t_list **stack_master_b);

//ft_sort5.c
static void	ft_sort5(t_list **stack_master_a, t_list *stack_master_b);

//ft_stack_master_free.c
void	ft_stack_master_free(t_list **stack_master);

//ft_top.c
void	ft_top(t_list **stack_master, int dist);

//printList.c
void	printList(t_list *head);

//main.c
static void	instack(t_list **stack, int ac, char **av);
static void	sort_stack(t_list **stackA, t_list **stackB);
int		main(int ac, char **av);

#endif
