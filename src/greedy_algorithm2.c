/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   greedy_algorithm2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohyupar <sohyupar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:33:48 by sohyupar          #+#    #+#             */
/*   Updated: 2023/01/19 22:20:41 by sohyupar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	cost_calculate(t_deque *a_stack, int b_data)
{
	int	cost;

	if (b_data < a_stack->data[a_stack->min])
	{
		cost = (a_stack->min - (a_stack->front + 1) + a_stack->len)
			% a_stack->len;
	}
	else if (b_data > a_stack->data[a_stack->max])
	{
		cost = (a_stack->max - (a_stack->front + 1) + a_stack->len)
			% a_stack->len + 1;
	}
	else
		cost = count_mid_cost(a_stack, b_data);
	return (cost);
}

int	count_mid_cost(t_deque *a_stack, int data)
{
	int	count;
	int	i;

	count = 1;
	i = 0;
	while (!(a_stack->data
			[find_idx(a_stack->front + 1 + i, a_stack->len)] < data
			&& a_stack->data
			[find_idx(a_stack->front + 2 + i, a_stack->len)] > data))
	{
		count++;
		i++;
	}
	
	return (count);
}

int	get_b_min_index(int *cost, int len)
{
	int	i;
	int	min;

	i = 0;
	min = cost[0];
	while (++i < len)
	{
		if (cost[i] < min)
			min = cost[i];
	}
	i = -1;
	while (++i < len)
	{
		if (cost[i] == min)
			break ;
	}
	return (i);
}

int	*b_stack_cost(t_deque *a_stack, t_deque *b_stack)
{
	int	*cost;
	int	b_len;
	int	i;
	int	b_data;

	b_len = get_stack_size(b_stack);
	cost = (int *)malloc(sizeof(int) * b_len);
	i = -1;
	while (++i < b_len)
	{
		b_data = b_stack->data[find_idx((b_stack->front + 1) + i, b_stack->len)];
		cost[i] = cost_calculate(a_stack, b_data);
	}
	return (cost);
}

void	greedy_sort(t_deque *a_stack, t_deque *b_stack)
{
	int	*cost;
	int	min_index;
	int	b_len;

	a_stack->min = get_a_min_index(a_stack);
	a_stack->max = get_a_max_index(a_stack);
	printf("min %d\n", a_stack->min);
	printf("max %d\n", a_stack->max);
	cost = b_stack_cost(a_stack, b_stack);
	b_len = get_stack_size(b_stack);
	min_index = get_b_min_index(cost, get_stack_size(b_stack));
	printf("min_index %d\n", min_index);
	for (int i = 0; i < b_len; i++)
		printf("cost[%d] : %d\n", i, cost[i]);
	exit(1);
	if (min_index > b_len / 2)
		use_rrb(a_stack, b_stack, cost[min_index], b_len - min_index);
	else
		use_rb(a_stack, b_stack, cost[min_index], min_index);
	pa(a_stack, b_stack);
}
