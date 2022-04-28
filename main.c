/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hejang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 11:00:14 by hejang            #+#    #+#             */
/*   Updated: 2022/04/25 19:39:58 by hejang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*stack_a;

	stack_a = create_stack();
	if (argc > 2)
	{
		change_arg(argc, argv, stack_a);
		if(check_sort(stack_a) == 1)
			return (0);
		if(sort_less_than_five(stack_a) == 1)
			return (0);
		sort_stack(stack_a);
	}
	return (0);
}

int sort_less_than_five(t_stack *stack_a)
{
	if(!stack_a)
		return (-1);
	if(stack_a->current_element_count == 2)
		sort_two_elements();
	else if(stack_a->current_element_count == 3)
		sort_three_elements(stack_a);
/*	else if(stack_a->current_element_count == 4)
		sort_four_elements(stack_a);
	else if(stack_a->current_element_count == 5)
		sort_five_elements(stack_a);*/
	else
		return (0);
	return (1);
}
