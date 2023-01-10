/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohyupar <sohyupar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:57:05 by sohyupar          #+#    #+#             */
/*   Updated: 2023/01/10 17:10:58 by sohyupar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_data(t_array *data)
{
	free(data);
	write(1, "Error\n", 6);
}

void	free_all(t_array *data)
{
	free(data->element);
	free(data);
	write(1, "Error\n", 6);
}

int	main(int ac, char **argv)
{
	t_array	*stack_a;
	t_array	*stack_b;
	int		i;
	int		num;

	i = 1;
	stack_a = (t_array *)calloc(0, sizeof(t_array));
	stack_b = (t_array *)calloc(0, sizeof(t_array));
	stack_a->len = ac;
	stack_b->len = ac;
	if (ac <= 2)
	{
		free_data(stack_a);
		free_data(stack_b);
	}
	else
	{
		init(stack_a);
		init(stack_b);
		add_front(stack_a, 5);
		printf("%d", stack_a->element[0]);
	}
}
