#include "push_swap.h"
#include <stdio.h>

void	print_q(t_array *q)
{
	t_array	*stack_a;

	stack_a = (t_array *)calloc(0, sizeof(t_array));
	printf("front=%d rear =%d\n", stack_a->front, stack_a->rear);
	int i = q->front;
	do {
		i = (i + 1) % 5;
		printf("%d |  ", q->element[i]);
		if (i == q->rear) break;
	} while (i != q->front);
	printf("\n");
}

int	main(void)
{
	t_array	*stack_a;

	stack_a = (t_array *)calloc(0, sizeof(t_array));
	stack_a->len = 5;
	init(stack_a);
	for (int i = 0; i < 3; i++)
	{
		add_front(stack_a, i + 1);
		print_q(stack_a);
	}
	for (int i = 0; i < 3; i++)
	{
		delete_rear(stack_a);
		print_q(stack_a);
	}
}
