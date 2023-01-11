/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 20:15:44 by yongmipa          #+#    #+#             */
/*   Updated: 2023/01/11 23:11:52 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	is_validate_argument(int ac, char const *av[])
{
	if (ac < 2)
		return (FALSE);
	if (ac == 2)
		return (two_argument(av));
	if (ac == 3)
		
	return (TRUE);
}

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
				return (FALSE);
		}
	}
}

int	two_argument(char const *av[])
{
	// 
	// 1. "1 3" 공공백 찾찾아아 strchr true 
	//   1.1 스플릿 해야 하는데 저장할 배열 필요함.
	// 2. "123" == 123  atoi  무조건 숫자 하나일듯
	// 3. 0000000000000000898 이건 어떻게 할거지??
	return (TRUE);
}
