/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:53:50 by yongmipa          #+#    #+#             */
/*   Updated: 2023/01/10 22:10:03 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*init_stack(int ac)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	stack->data = malloc(sizeof(int) * ac);
	stack->front = 0;
	stack->rear = 0;
	stack->len = ac;
	return (stack);
}

void	fill_stack(t_stack *stack, int ac, char const *av[])
{
	int	i;

	i = 1;
	while (i < ac)
	{
		stack->data[i] = ft_atoi(av[i]);
		i++;
		stack->rear++;
	}
}
