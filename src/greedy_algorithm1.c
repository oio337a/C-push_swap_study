/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   greedy_algorithm1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohyupar <sohyupar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:44:29 by sohyupar          #+#    #+#             */
/*   Updated: 2023/01/18 19:33:25 by sohyupar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
//필요한 것

int	get_stack_size(t_deque *stack)
{
	if (stack->front < stack->rear)
		return (stack->rear - stack->front);
	return (stack->len - (stack->front - stack->rear));
}

void	set_position(t_deque *stack, int *first, int *mid, int *last)
{
	*first = find_idx(stack->front + 1, stack->len);
	*mid = find_idx(stack->front + 2, stack->len);
	*last = find_idx(stack->rear, stack->len);
}

void	a_stack_sort(t_deque *stack)
{
	int	first;
	int	mid;
	int	last;

	set_position(stack, &first, &mid, &last);
	if (stack->data[first] < stack->data[last]
		&& stack->data[last] < stack->data[mid])
	{
		sa(stack);
		ra(stack);
	}
	else if (stack->data[mid] < stack->data[first]
		&& stack->data[first] < stack->data[last])
		sa(stack);
	else if (stack->data[first] < stack->data[mid]
		&& stack->data[last] < stack->data[first])
		rra(stack);
	else if (stack->data[mid] < stack->data[last]
		&& stack->data[last] < stack->data[first])
		ra(stack);
	else
	{
		sa(stack);
		rra(stack);
	}
}

void	preprocess(t_deque *a_stack, t_deque *b_stack)
{
	int	*pivot;
	int	i;

	pivot = get_pivot(a_stack);
	i = 0;
	// greedy 시작 시 따로 빼서 먼저 묻기
	if (get_stack_size(a_stack) == 3 && is_empty(b_stack))
	{
		a_stack_sort(a_stack);
		return ;
	}
	while (++i < a_stack->len)
	{
		if (get_stack_size(a_stack) == 3)
			break ;
		if (a_stack->data[i] <= pivot[0])
		{
			pb(a_stack, b_stack);
			rb(b_stack);
		}
		else if (a_stack->data[i] > pivot[0] && a_stack->data[i] <= pivot[1])
			pb(a_stack, b_stack);
		else
			ra(a_stack);
	}
	while (get_stack_size(a_stack) != 3)
		pb(a_stack, b_stack);
	a_stack_sort(a_stack);
}
