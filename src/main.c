/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohyupar <sohyupar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:07:26 by sohyupar          #+#    #+#             */
/*   Updated: 2023/01/19 17:55:48 by sohyupar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	count_argu(int ac, char *av[])
{
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

void	fill_stack(int ac, char *av[], t_deque *a_stack)
{
	char	**numbers;
	int		i;
	int		num;

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
			add_rear(a_stack, num);
			i++;
		}
		ft_free(numbers);
	}
}

int	main(int ac, char *av[])
{
	int		len;
	t_deque	*a_stack;
	t_deque	*b_stack;
	int		*pivot;

	if (ac < 2)
		return (1);
	len = count_argu(ac, av);
	a_stack = init(len + 1);
	fill_stack(ac, av, a_stack);
	check_duplication(a_stack);
	if (len == 2)
	{
		if (a_stack->data[1] > a_stack->data[2])
			sa(a_stack);
		exit(0);
	}
	pivot = get_pivot(a_stack);
	b_stack = init(len + 1);
	preprocess(a_stack, b_stack);
	for (int i = 0; i < len + 1; i++)
		printf("%d\n", a_stack->data[i]);
	printf ("%d %d\n", a_stack->front, a_stack->rear);
	printf("%d\n", b_stack->data[(b_stack->front + 1) % b_stack->len]);
	printf("??????????? %d\n", is_empty(b_stack));
	/**
	 * 1. 중복검사
	 * 2. 인덱싱, 사전정렬
	 * 3. 인덱싱 전에 검수 하면서 이미 정렬이 되어 있는지 
	 * 4. error에 한번도 안걸렸으면 greedy2 수행
	 **/
	return (0);
}
