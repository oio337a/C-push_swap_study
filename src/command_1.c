/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:16:33 by yongmipa          #+#    #+#             */
/*   Updated: 2023/01/11 18:57:24 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <unistd.h>

void	sa(t_stack *a)
{
	ft_putendl_fd("sa", STDOUT_FILENO);
	swap_stack(a);
}

void	sb(t_stack *b)
{
	ft_putendl_fd("sb", STDOUT_FILENO);
	swap_stack(b);
}

void	ss(t_stack *a, t_stack *b)
{
	ft_putendl_fd("ss", STDOUT_FILENO);
	swap_stack(a);
	swap_stack(b);
}

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
