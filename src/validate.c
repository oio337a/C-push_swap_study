/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 20:15:44 by yongmipa          #+#    #+#             */
/*   Updated: 2023/01/13 18:35:33 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	is_digit_data(int ac, char const *av[])
{
	size_t	i;
	size_t	j;

	i = 0;
	while (++i < (size_t)ac)
	{
		j = -1;
		while (++j < ft_strlen(av[i]))
		{
			if (!ft_isdigit(av[i][j]))
				exit(print_error());
		}
	}
	return (TRUE);
}

void	two_argument(int ac, char const *av[])
{
	// 1. "1 3" 공공백 찾찾아아 strchr true 
	//   1.1 스플릿 해야 하는데 저장할 배열 필요함.
	if (ft_strchr(av[1], ' '))
	{
		printf("---------");
	}
	exit(print_error);
}

void	is_validate_argument(int ac, char const *av[])
{
	if (ac < 2)
		exit(print_error());
	if (ac == 2)
		two_argument(ac, av);
	// if (ac == 3)
}
