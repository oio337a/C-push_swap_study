/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   judge_state.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohyupar <sohyupar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 20:49:36 by sohyupar          #+#    #+#             */
/*   Updated: 2023/01/22 13:18:22 by sohyupar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	set_three(t_deque *stack, int first, int mid, int last)
{
	if (stack->data[first] < stack->data[last]
		&& stack->data[last] < stack->data[mid])
		return (42);
	if (stack->data[mid] < stack->data[first]
		&& stack->data[first] < stack->data[last])
		return (43);
	if (stack->data[first] < stack->data[mid]
		&& stack->data[last] < stack->data[first])
		return (44);
	if (stack->data[mid] < stack->data[last]
		&& stack->data[last] < stack->data[first])
		return (45);
	if (stack->data[mid] < stack->data[first]
		&& stack->data[last] < stack->data[mid])
		return (46);
	return (0);
}

void	ra_rrb(t_deque *a, t_deque *b, int ra_count, int rrb_count)
{
	while (ra_count && ra_count--)
		ra(a);
	while (rrb_count && rrb_count--)
		rrb(b);
}

void	rra_rb(t_deque *a, t_deque *b, int ra_count, int rb_count)
{
	while (ra_count && ra_count--)
		rra(a);
	while (rb_count && rb_count--)
		rb(b);
}

void	judge_pivot(t_deque *a, t_deque *b, int a_top, int *pivot)
{
	if (a_top <= pivot[0])
	{
		if (is_empty(b))
			pb(a, b);
		else
		{
			pb(a, b);
			rb(b);
		}
	}
	else if (a_top > pivot[0] && a_top < pivot[1])
		pb(a, b);
	else
		ra(a);
}
