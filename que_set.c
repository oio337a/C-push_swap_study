/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   que_set.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohyupar <sohyupar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:22:23 by sohyupar          #+#    #+#             */
/*   Updated: 2023/01/10 17:53:48 by sohyupar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init(t_array *q)
{
	q->front = 0;
	q->rear = 0;
	q->element = (int *)malloc(sizeof(int) * q->len);
}

int	is_full(t_array *q)
{
	return ((q->rear + 1) % q->len == q->front);
}

int	is_empty(t_array *q)
{
	return (q->front == q-> rear);
}
