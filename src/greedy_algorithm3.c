/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   greedy_algorithm3.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohyupar <sohyupar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:39:31 by sohyupar          #+#    #+#             */
/*   Updated: 2023/01/19 19:37:30 by sohyupar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	use_rrr(t_deque *a_stack, t_deque *b_stack ,int rra_count, int rrb_count)
{
	while (rra_count-- && rrb_count--)
			rrr(a_stack, b_stack);
		if (rra_count < rrb_count)
		{
			while (rrb_count--)
				rrb(b_stack);
		}
		else if (rrb_count < rra_count)
		{
			while (rra_count--)
				rra(a_stack);
		}
}

void	use_rr(t_deque *a_stack, t_deque *b_stack ,int ra_count, int rb_count)
{
	while (ra_count-- && rb_count--)
			rrr(a_stack, b_stack);
		if (ra_count < rb_count)
		{
			while (rb_count--)
				rrb(b_stack);
		}
		else if (rb_count < ra_count)
		{
			while (ra_count--)
				rra(a_stack);
		}
}
