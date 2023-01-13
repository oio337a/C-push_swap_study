/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:47:51 by yongmipa          #+#    #+#             */
/*   Updated: 2023/01/13 18:05:36 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int ac, char const *av[])
{
	t_stack	*a_stack;

	if (!is_validate_argument(ac, av))
		exit(print_error("Invalide arguments"));
	a_stack = init_stack(ac);

	return (0);
}
