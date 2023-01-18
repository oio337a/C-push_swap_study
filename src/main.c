/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohyupar <sohyupar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:07:26 by sohyupar          #+#    #+#             */
/*   Updated: 2023/01/18 16:11:58 by sohyupar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	count_argu(int ac, char *av[])
{
	/*
		./push_swap "1 2 3" 4 5 6
		ac = 5

		1 = 1 2 3
		2 = 4
		3 = 5
		4 = 6
		
		@ ac만큼 반복
			@ 첫 번째 문자 널이면 error
			@ split ' '
			@ split 한 2차원 배열 루프
				@ 변형 atoi 로 num 추출
				@ len++;
	*/
	char	**numbers;
	int		i;
	int		num;
	int		len;

	len = 0;
	while (--ac)
	{
		if (**(++av) == '\0')
			exit(error());
		numbers = ft_split(*av, ' ');
		if (!numbers)
			exit(error());
		i = 0;
		while (numbers[i])
		{
			num = ft_atoi2(numbers[i]);
			len++;
			i++;
		}
		ft_free(numbers);
	}
	if (len == 1)
		exit(error());
	return (len);
}

int main(int ac, char *av[])
{
	int	len;

	// agument 처리중!!
	if (ac < 2)
		return (1);
	len = count_argu(ac, av);
	printf("%d", len);
	return (0);
}