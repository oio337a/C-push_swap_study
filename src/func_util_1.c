/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_util_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:14:22 by yongmipa          #+#    #+#             */
/*   Updated: 2023/01/11 17:09:20 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	is_empty(t_stack *stack)
{
	return (stack->front == stack->rear);
}

void	add_front(t_stack *stack, int data)
{
	stack->data[stack->front] = data;
	stack->front = (stack->front - 1 + stack->len) % stack->len;
}

void	add_rear(t_stack *stack, int data)
{
	stack->rear = (stack->rear + 1 + stack->len) % stack->len;
	stack->data[stack->rear] = data;
}

void	delete_front(t_stack *stack)
{
	stack->front = (stack->front + 1 + stack->len) % stack->len;
}

void	delete_rear(t_stack *stack)
{
	stack->rear = (stack->rear - 1 + stack->len) % stack->len;
}
