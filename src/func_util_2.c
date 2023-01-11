/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_util_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:54:02 by yongmipa          #+#    #+#             */
/*   Updated: 2023/01/11 20:10:24 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap_stack(t_stack *stack)
{
	int	temp;

	temp = stack->data[(stack->front + 1 + stack->len) % stack->len];
	stack->data[(stack->front + 1 + stack->len) % stack->len]
		= stack->data[(stack->front + 2 + stack->len) % stack->len];
	stack->data[(stack->front + 2 + stack->len) % stack->len] = temp;
}

void	rotate_stack(t_stack *stack)
{
	int	temp;

	temp = stack->data[(stack->front + 1 + stack->len) % stack->len];
	add_rear(stack, temp);
	delete_front(stack);
}

void	reverse_rotate_stack(t_stack *stack)
{
	int	temp;

	temp = stack->data[(stack->rear + 1 + stack->len) % stack->len];
	add_front(stack, temp);
	delete_rear(stack);
}
