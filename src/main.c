/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <suhwpark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:07:26 by sohyupar          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/01/20 21:26:25 by sohyupar         ###   ########.fr       */
=======
/*   Updated: 2023/01/20 19:13:30 by suhwpark         ###   ########.fr       */
>>>>>>> ad2bc5bb9ab91156e7c0b3d238ed6c4138f3afbb
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

	if (ac < 2)
		return (1);
	len = count_argu(ac, av);
	a_stack = init(len + 1);
	fill_stack(ac, av, a_stack);
<<<<<<< HEAD
	// for (int i = 0; i < a_stack->len; i++)
	// 	printf("idx : %d value :%d\n", i, a_stack->data[i]);
	// printf("f : %d, r : %d\n", a_stack->front, a_stack->rear);
=======
	for (int i = 0; i < a_stack->len; i++)
		printf("idx : %d value :%d\n", i, a_stack->data[i]);
	printf("f : %d, r : %d\n", a_stack->front, a_stack->rear);
>>>>>>> ad2bc5bb9ab91156e7c0b3d238ed6c4138f3afbb
	check_duplication(a_stack);
	if (len == 2)
	{
		if (a_stack->data[1] > a_stack->data[2])
			sa(a_stack);
		exit(0);
	}
	b_stack = init(len + 1);
	preprocess(a_stack, b_stack);
<<<<<<< HEAD
	// for (int i = 0; i < a_stack->len; i++)
	// 	printf("idx : %d value :%d\n", i, a_stack->data[i]);
	// printf("f : %d, r : %d\n", a_stack->front, a_stack->rear);
	while (!is_empty(b_stack))
		greedy_sort(a_stack, b_stack);
	while (a_stack->data[find_idx(a_stack->front + 1, a_stack->len)] != 1)
		ra(a_stack);
	//확인용
	// for (int i = 0; i < a_stack->len; i++)
	// 	printf("idx : %d value :%d\n", i, a_stack->data[i]);
	// printf("f : %d, r : %d\n", a_stack->front, a_stack->rear);
=======
	for (int i = 0; i < a_stack->len; i++)
		printf("idx : %d value :%d\n", i, a_stack->data[i]);
	printf("f : %d, r : %d\n", a_stack->front, a_stack->rear);
	while (!is_empty(b_stack))
		greedy_sort(a_stack, b_stack);
	// while (a_stack->data[find_idx(a_stack->front + 1, a_stack->len)] != 1)
	// 	rra(a_stack);
	//확인용
	for (int i = 0; i < a_stack->len; i++)
		printf("idx : %d value :%d\n", i, a_stack->data[i]);
	printf("f : %d, r : %d\n", a_stack->front, a_stack->rear);
>>>>>>> ad2bc5bb9ab91156e7c0b3d238ed6c4138f3afbb
	return (0);
}
