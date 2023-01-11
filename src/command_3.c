/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 20:10:34 by yongmipa          #+#    #+#             */
/*   Updated: 2023/01/11 20:13:04 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <unistd.h>

void	rrr(t_stack *a, t_stack *b)
{
	ft_putendl_fd("rrr", STDOUT_FILENO);
	reverse_rotate_stack(a);
	reverse_rotate_stack(b);
}
