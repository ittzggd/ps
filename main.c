#include"push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*stack_a;

	stack_a = create_stack();
	if(argc > 2)
	{
		change_arg(argc, argv, stack_a);
		sort_stack(stack_a);
	}
	return (0);
}
