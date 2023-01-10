/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_util_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:14:22 by yongmipa          #+#    #+#             */
/*   Updated: 2023/01/10 22:10:11 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	add_front(t_stack *stack, int data, int len)
{
	stack->data[stack->front] = data;
	stack->front = (stack->front - 1 + len) % len;
}

void	delete_front(t_stack *stack, int len)
{
	int is_empty(DQType* q)
{
    return q->front == q->rear;
}
}
