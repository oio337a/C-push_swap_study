/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_reverse_rotate.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohyupar <sohyupar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 20:11:52 by sohyupar          #+#    #+#             */
/*   Updated: 2023/01/18 15:17:28 by sohyupar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_deque *stack_a)
{
	add_front(stack_a, stack_a->data[find_idx(stack_a->rear, stack_a->len)]);
	delete_rear(stack_a);
}

void	rrb(t_deque *stack_b)
{
	add_front(stack_b, stack_b->data[find_idx(stack_b->rear, stack_b->len)]);
	delete_rear(stack_b);
}

void	rrr(t_deque *stack_a, t_deque *stack_b)
{
	rra(stack_a);
	rrb(stack_b);
}
