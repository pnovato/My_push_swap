#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

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

#endif

