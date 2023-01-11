/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:47:51 by yongmipa          #+#    #+#             */
/*   Updated: 2023/01/11 17:12:49 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	is_validate_argument(int ac, char const *av[])
{
	size_t	i;
	size_t	j;

	i = 0;
	if (ac < 2)
		exit(print_error("Invalide argument"));
	while (++i < (size_t)ac)
	{
		j = -1;
		while (++j < ft_strlen(av[i]))
		{
			if (!ft_isdigit(av[i][j]))
				return (FALSE);
		}
	}
	return (TRUE);
}

int	main(int ac, char const *av[])
{
	t_stack	*a_stack;
	t_stack	*b_stack;

	if (!is_validate_argument(ac, av))
		exit(0);
	a_stack = init_stack(ac);
	b_stack = init_stack(ac);
	fill_stack(a_stack, ac, av);
	printf("%d, %d, %d, %d", a_stack->data[0], a_stack->data[1], a_stack->data[2], a_stack->data[3]);
	printf("\n%d, %d, front", a_stack->front, a_stack->data[a_stack->front]);
	printf("\n%d, %d, rear", a_stack->rear, a_stack->data[a_stack->rear]);
	printf("\n---------------------------------------------------------------------\n");
	rotate_stack(a_stack);
	printf("%d, %d, %d, %d", a_stack->data[0], a_stack->data[1], a_stack->data[2], a_stack->data[3]);
	printf("\n%d, %d, front", a_stack->front, a_stack->data[a_stack->front]);
	printf("\n%d, %d, rear", a_stack->rear, a_stack->data[a_stack->rear]);
	printf("\n---------------------------------------------------------------------\n");
	rrotate_stack(a_stack);
	printf("%d, %d, %d, %d", a_stack->data[0], a_stack->data[1], a_stack->data[2], a_stack->data[3]);
	printf("\n%d, %d, front", a_stack->front, a_stack->data[a_stack->front]);
	printf("\n%d, %d, rear", a_stack->rear, a_stack->data[a_stack->rear]);
	printf("\n---------------------------------------------------------------------\n");
	swap_stack(a_stack);
	printf("%d, %d, %d, %d", a_stack->data[0], a_stack->data[1], a_stack->data[2], a_stack->data[3]);
	printf("\n%d, %d, front", a_stack->front, a_stack->data[a_stack->front]);
	printf("\n%d, %d, rear", a_stack->rear, a_stack->data[a_stack->rear]);


	
	// printf("\n---------------------------------------------------------------------\n");
	// delete_front(a_stack);
	// printf("%d, %d, %d, %d", a_stack->data[0], a_stack->data[1], a_stack->data[2], a_stack->data[3]);
	// printf("\n%d, %d, front", a_stack->front, a_stack->data[a_stack->front]);
	// printf("\n---------------------------------------------------------------------\n");
	// delete_rear(a_stack);
	// printf("%d, %d, %d, %d", a_stack->data[0], a_stack->data[1], a_stack->data[2], a_stack->data[3]);
	// printf("\n%d, %d, rear", a_stack->rear, a_stack->data[a_stack->rear]);
	return (0);
}
