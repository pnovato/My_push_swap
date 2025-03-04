#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

typedef struct t_list
{
	int value;
	int index;
	struct t_list *next;
}s_list;


//movements logic
void    swap(s_list **a);
int     push(s_list **stack_destiny, s_list **stack_origin);
int     rotate(s_list **stack_master);
int     reverseRotate(s_list **stack_master);

//swap movement
int     sa(s_list **stack_a);
int     sb(s_list **stack_b);
int     ss(s_list **stack_a, s_list **stack_b);

//push movement
int     pa(s_list **stack_a, s_list **stack_b);
int     pb(s_list **stack_b, s_list **stack_a);

//rotate movement
int     ra(s_list **stack_a);
int     rb(s_list **stack_b);
int     rr(s_list **stack_a, s_list **stack_b);

//reverseRotate movement
int     rra(s_list **stack_a);
int     rrb(s_list **stack_b);
int     rrr(s_list **stack_a, s_list **stack_b);

//ft_ac.c
static int	ft_check_num(char *n);
static int	ft_validator(int n, char **av, int i);
void	ft_arg_validate(int ac, char **av);

//ft_all_sets.c
void	ft_print(s_list **stack, int ac, char **av);
int	main(int ac, char **av);

//ft_check_if_is_sorted.c
int	ft_check_if_is_sorted(s_list **stack_master);

//ft_dist.c
int	ft_dist(s_list	**stack_master, int i);

//ft_error.c
void	ft_error(char *msg);

//ft_free.c
void	ft_free(char **str);

//ft_indexing.c
static s_List	*ft_get_next_min(s_list **stack);
void	ft_index_stack(s_list **stack);

//ft_instrc.c
int	ft_instrc1(char *l, s_list **stack_masterA, s_list **stack_masterB);
int	ft_instrc2(char *l, s_list **stack_masterA, s_list **stack_masterB);
int	ft_instrc3(char *l, s_list **stack_masterA, s_list **stack_masterB);
int	ft_instrc4(char *l, s_list **stack_masterA, s_list **stack_masterB);
int	ft_do(char *l, s_list **stack_masterA, s_list **stack_masterB);

//ft_lstaddback_push.c
void	ft_lstadd_back_push(s_list **stack_master, s_list *node);

//ft_lstaddfront_push.c
void	ft_lstaddfront_push(s_list **stack_master, s_list *n);

//ft_lstlast_push.c
s_list	*ft_lstlast_push(s_list *head);

//ft_lstsize_push.c
int	ft_lstsize_push(s_list *head);

//ft_max_bits.c
static int	ft_max_bits(s_list **stack_master);

//ft_min.c
static int	ft_min(s_list **stack_master, int value);

//ft_radix_alg.c
void	ft_radix_alg(s_list **stack_master_a, s_list **stack_master_b);

//ft_simple_sort.c
static void	ft_simple_sort(s_list **stack_master_a, s_list **stack_master_b);

//ft_sort3.c
static void	execute(s_list **stack_master_a);
static void	ft_sort3(s_list **stack_master_a);

//ft_sort4.c
static void	ft_sort4(s_list **stack_master_a, s_list **stack_master_b);

//ft_sort5.c
static void	ft_sort5(s_list **stack_master_a, s_list *stack_master_b);

//ft_stack_master_free.c
void	ft_stack_master_free(s_list **stack_master);

//ft_top.c
void	ft_top(s_list **stack_master, int dist);

//printList.c
void	printList(s_list *head);


//main.c
static void	inStack(s_list **stack, int ac, char **av);
static void	sort_stack(s_list **stackA, s_list **stackB);
int	main(int ac, char **av);






#endif
