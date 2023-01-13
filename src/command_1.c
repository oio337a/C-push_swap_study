/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:16:33 by yongmipa          #+#    #+#             */
/*   Updated: 2023/01/13 17:17:44 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <unistd.h>

void	pa(t_stack *a, t_stack *b)
{
	ft_putendl_fd("pa", STDOUT_FILENO);
	add_front(a, b->data[b->front + 1]);
	delete_front(b);
}

void	pb(t_stack *a, t_stack *b)
{
	ft_putendl_fd("pb", STDOUT_FILENO);
	add_front(b, a->data[a->front + 1]);
	delete_front(a);
}

void	rrr(t_stack *a, t_stack *b)
{
	ft_putendl_fd("rrr", STDOUT_FILENO);
	reverse_rotate_stack(a);
	reverse_rotate_stack(b);
}
