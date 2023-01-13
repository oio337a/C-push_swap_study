/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:57:39 by yongmipa          #+#    #+#             */
/*   Updated: 2023/01/13 17:16:13 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <unistd.h>

void	ra(t_stack *a)
{
	ft_putendl_fd("ra", STDOUT_FILENO);
	rotate_stack(a);
}

void	rb(t_stack *b)
{
	ft_putendl_fd("rb", STDOUT_FILENO);
	rotate_stack(b);
}

void	rr(t_stack *a, t_stack *b)
{
	ft_putendl_fd("rr", STDOUT_FILENO);
	rotate_stack(a);
	rotate_stack(b);
}

void	rra(t_stack *a)
{
	ft_putendl_fd("rra", STDOUT_FILENO);
	reverse_rotate_stack(a);
}

void	rrb(t_stack *b)
{
	ft_putendl_fd("rrb", STDOUT_FILENO);
	reverse_rotate_stack(b);
}
