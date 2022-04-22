#include"push_swap.h"

void	change_arg(int argc, char **argv, t_stack *stack_a)
{
	int				i;
	int				j;
	int				num;
	char			**s_num;
	t_stack_node	new_node;

	i = 1;
	while(i < argc)
	{
		j = 0;
		s_num = ft_split(argv[i], 32);
		if(*s_num == NULL)
			return ;
		while(s_num[j] != NULL)
		{
			num = ft_atoi(s_num[j]);
			new_node.index = 0;
			new_node.data = num;
			new_node.prev = NULL;
			new_node.next = NULL;
			push_stack_a(stack_a, new_node);
			indexing_stack_a(stack_a);
			j++;
		}
		free(s_num[j]);
		i++;
	}
	free(s_num);
}

void indexing_stack_a(t_stack *stack_a)
{
	int				i;
	t_stack_node	*head;
	t_stack_node	*new_node;
	t_stack_node	*curr;

	head = &stack_a->header_node;
	new_node = head->prev;
	curr = head->next;
	i = 0;
	while(i < stack_a->current_element_count)
	{
		if(new_node->data == curr->data)
			return ;
		else if(new_node->data > curr->data)
			new_node->index++;
		else if(new_node->data < curr->data)
			curr->index++;
		curr = curr->next;
		i++;
	}
}
