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
		sort_stack(stack_a);
	}
	return (0);
}
