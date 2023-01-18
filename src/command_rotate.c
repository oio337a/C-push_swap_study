/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohyupar <sohyupar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:40:17 by sohyupar          #+#    #+#             */
/*   Updated: 2023/01/18 15:17:10 by sohyupar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_deque *stack_a)
{
	add_rear(stack_a, stack_a->data[find_idx(stack_a->front, stack_a->len)]);
	delete_front(stack_a);
}

void	rb(t_deque *stack_b)
{
	add_rear(stack_b, stack_b->data[find_idx(stack_b->front, stack_b->len)]);
	delete_front(stack_b);
}

void	rr(t_deque *stack_a, t_deque *stack_b)
{
	ra(stack_a);
	rb(stack_b);
}
