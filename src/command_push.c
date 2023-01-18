/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohyupar <sohyupar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:34:50 by sohyupar          #+#    #+#             */
/*   Updated: 2023/01/18 15:55:34 by sohyupar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pa(t_deque *stack_a, t_deque *stack_b)
{
	if (!is_empty(stack_b))
	{
		add_front(stack_a,
			stack_b->data[find_idx(stack_b->front, stack_b->len)]);
		delete_front(stack_b);
	}
}

void	pb(t_deque *stack_a, t_deque *stack_b)
{
	if (!is_empty(stack_a))
	{
		add_front(stack_b,
			stack_a->data[find_idx(stack_a->front, stack_a->len)]);
		delete_front(stack_a);
	}
}
