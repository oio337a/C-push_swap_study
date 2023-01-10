/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   que_data.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohyupar <sohyupar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 20:47:45 by sohyupar          #+#    #+#             */
/*   Updated: 2023/01/09 21:28:04 by sohyupar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_front(t_array *q, int data)
{
	if (is_full(q))
		return ;
	q->element[q->front] = data;
	q->front = (q->front - 1 + q->len) % q->len;
}

void	add_rear(t_array *q, int data)
{
	if (is_full(q))
		return ;
	q->rear = (q->rear + 1);
	q->element[q->rear] = data;
}

void	delete_front(t_array *q)
{
	int	now;

	if (is_empty(q))
		return ;
	now = q->front;
	q->front = (q->front + 1) % q->len;
}

void	delete_rear(t_array *q)
{
	int	now;

	if (is_empty(q))
		return ;
	now = q->rear;
	q->rear = (q->rear - 1 + q->len) % q->len;
}
