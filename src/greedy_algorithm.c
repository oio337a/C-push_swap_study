/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   greedy_algorithm.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohyupar <sohyupar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:44:29 by sohyupar          #+#    #+#             */
/*   Updated: 2023/01/18 15:59:24 by sohyupar         ###   ########.fr       */
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

void	a_stack_sort(t_deque *stack)
{

}

void	preprocess(t_deque *a_stack, t_deque *b_stack)
{
	int	*pivot;
	int	i;

	pivot = get_pivot(a_stack);
	i = 0;
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
	{
		pb(a_stack, b_stack);
	}
}
