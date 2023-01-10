/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:47:51 by yongmipa          #+#    #+#             */
/*   Updated: 2023/01/10 22:09:21 by yongmipa         ###   ########seoul.kr  */
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
	printf("%d, %d, %d", a_stack->data[0], a_stack->data[2], a_stack->data[3]);
	printf("\n%d, rear", a_stack->rear);
	return (0);
}
