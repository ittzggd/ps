#include"push_swap.h"

void	sort_two_elements(void)
{
	printf("sa\n");
}

void	sort_three_elements(t_stack *stack_a)
{
	t_stack_node	*curr;

	curr = stack_a->header_node.next;
	if(curr->index == stack_a->current_element_count - 3)
	{
		curr = curr->next;
		if(curr->index == stack_a->current_element_count - 1)
		{
			rra(stack_a);
			sa(stack_a);
		}
	}
	else if(curr->index == stack_a->current_element_count - 2)
	{
		curr =  curr->next;
		if(curr->index == stack_a->current_element_count - 3)
			sa(stack_a);
		else
			rra(stack_a);
	}
	else if(curr->index == stack_a->current_element_count - 1)
	{
		curr = curr->next;
		if(curr->index == stack_a->current_element_count - 3)
			ra(stack_a);
		else
		{
			sa(stack_a);
			rra(stack_a);
		}
	}
}

