/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   que_set.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohyupar <sohyupar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:22:23 by sohyupar          #+#    #+#             */
/*   Updated: 2023/01/18 15:20:52 by sohyupar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init(t_deque *q)
{
	q->front = 0;
	q->rear = 0;
	q->data = (int *)malloc(sizeof(int) * q->len);
}

int	is_empty(t_deque *q)
{
	return (q->front == q-> rear);
}
