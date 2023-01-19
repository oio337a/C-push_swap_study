/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   greedy_algorithm2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohyupar <sohyupar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:33:48 by sohyupar          #+#    #+#             */
/*   Updated: 2023/01/19 17:29:25 by sohyupar         ###   ########.fr       */
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
			% a_stack->len;
	}
	else
		cost = count_mid_cost(a_stack, b_data);
	return (cost);
}
// 제가 중간값 루프 도는거 만들고 있으게요 함수.

int	count_mid_cost(t_deque *a_stack, int data)
{
	int	count;
	int	i;

	count = 1;
	i = 0;
	while (a_stack->data[find_idx(a_stack->front + 1 + i, a_stack->len)] < data
		&& a_stack->data[find_idx(a_stack->front + 2 + i, a_stack->len)] > data)
	{
		count++;
		i++;
	}
	return (count);
}