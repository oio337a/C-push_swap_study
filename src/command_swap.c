/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohyupar <sohyupar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 20:57:16 by sohyupar          #+#    #+#             */
/*   Updated: 2023/01/18 15:25:19 by sohyupar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_deque *stack_a)
{
	int	tmp;
	int	next_top;

	next_top = stack_a->front + 2;
	if (!is_empty(stack_a))
	{
		tmp = stack_a->data[find_idx(stack_a->front, stack_a->len)];
		stack_a->data[find_idx(stack_a->front, stack_a->len)]
			= stack_a->data[(next_top) % stack_a->len];
		stack_a->data[(next_top) % stack_a->len]
			= tmp;
	}
}

void	sb(t_deque *stack_b)
{
	int	tmp;
	int	next_top;

	next_top = stack_b->front + 2;
	if (!is_empty(stack_b))
	{
		tmp = stack_b->data[find_idx(stack_b->front, stack_b->len)];
		stack_b->data[find_idx(stack_b->front, stack_b->len)]
			= stack_b->data[(next_top) % stack_b->len];
		stack_b->data[(next_top) % stack_b->len]
			= tmp;
	}
}

void	ss(t_deque *stack_a, t_deque *stack_b)
{
	sa(stack_a);
	sb(stack_b);
}
