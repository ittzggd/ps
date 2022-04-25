/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hejang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 11:24:52 by hejang            #+#    #+#             */
/*   Updated: 2022/04/25 11:50:52 by hejang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include<stdlib.h>
# include<stdio.h>
# include"./libft/libft.h"
//#include"ft_printf.h"

typedef struct s_stack_node
{
	int						index;
	int						data;
	struct s_stack_node		*prev;
	struct s_stack_node		*next;
}	t_stack_node;

typedef struct s_stack
{
	int				current_element_count;
	t_stack_node	header_node;
}	t_stack;

t_stack			*create_stack(void);
int				push_stack_a(t_stack *stack_a, t_stack_node element);
int				add_element(t_stack *stack, int position, t_stack_node element);

void			change_arg(int argc, char *argv[], t_stack *stack_a);
void			indexing_stack_a(t_stack *stack_a);

int				swap(t_stack *stack);
void			sa(t_stack *stack);
void			sb(t_stack *stack);
void			ss(t_stack *stack_a, t_stack *stack_b);

int				rotate(t_stack *stack);
void			ra(t_stack *stack_a);
void			rb(t_stack *stack_b);
void			rr(t_stack *stack_a, t_stack *stack_b);

int				reverse_rotate(t_stack *stack);
void			rra(t_stack *stack_a);
void			rrb(t_stack *stack_b);
void			rrr(t_stack *stack_a, t_stack *stack_b);

t_stack_node	*get_top(t_stack *from);
int				push(t_stack *to, t_stack_node *p_node);
void			pa(t_stack *stack_a, t_stack *stack_b);
void			pb(t_stack *stack_a, t_stack *stack_b);

int				check_sort(t_stack *stack_a);
int				sort_stack(t_stack *stack_a);
int				get_chunk(int element_count);
void			from_a_to_b(t_stack *stack_a, t_stack *stack_b, int chunk);

int				get_max_position(t_stack *stack);
void			from_b_to_a(t_stack *stack_a, t_stack *stack_b);

# define FALSE	0
# define TRUE	1

#endif
