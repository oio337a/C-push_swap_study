/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohyupar <sohyupar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:07:26 by sohyupar          #+#    #+#             */
/*   Updated: 2023/01/20 15:24:30 by sohyupar         ###   ########.fr       */
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
	check_duplication(a_stack);
	if (len == 2)
	{
		if (a_stack->data[1] > a_stack->data[2])
			sa(a_stack);
		exit(0);
	}
	b_stack = init(len + 1);
	preprocess(a_stack, b_stack);
	for (int i = 0; i < a_stack->len; i++)
		printf("idx :%d value :%d\n", i, a_stack->data[i]);
	printf("af : %d ar : %d\n", a_stack->front, a_stack->rear);
	printf("---------------------------------------------------------\n");
	for (int i = 0; i < b_stack->len; i++)
		printf("idx :%d value :%d\n", i, b_stack->data[i]);
	printf("bf : %d br : %d\n", b_stack->front, b_stack->rear);
	while (!is_empty(b_stack))
		greedy_sort(a_stack, b_stack);
	while (a_stack->data[find_idx(a_stack->front + 1, a_stack->len)] != 1)
		rra(a_stack);
	for (int i = 0; i < a_stack->len; i++)
		printf("idx :%d value :%d\n", i, a_stack->data[i]);
	printf("f : %d r : %d\n", a_stack->front, a_stack->rear);
	return (0);
}



/*

	printf("??????????? %d\n", is_empty(b_stack));
	while (is_empty(b_stack))
		greedy_sort(a_stack, b_stack);
	// while (a_stack->data[find_idx(a_stack->front + 1, a_stack->len)] == 1)
	// 	rra(a_stack);
	for (int i = 0; i < len + 1; i++)
		printf("%d\n", a_stack->data[i]);
	printf ("%d %d\n", a_stack->front, a_stack->rear);



	// printf("is empty? \n%d\n", is_empty(b_stack));
	// while (is_empty(b_stack) != 1)
	// 	greedy_sort(a_stack, b_stack);
	// while (a_stack->data[find_idx(a_stack->front + 1, a_stack->len)] != 1)
	// {
	// 	printf("rra!!!!!!!!!!!!!!!!!!!!!!!%d\n", a_stack->data[find_idx(a_stack->front + 1, a_stack->len)]);
	// 	rra(a_stack);
	// }
	// for (int i = 0; i < a_stack->len; i++)
	// {
	// 	printf("after sort %d | ", a_stack->data[find_idx(a_stack->front + i, a_stack->len)]);
	// }
	// printf ("\n%d %d\n", a_stack->front, a_stack->rear);
	// for (int i = 0; i < len + 1; i++)
	// 	printf("after aaaaaaaaaaa%d | ", a_stack->data[i]);
	// printf ("\n%d %d\n", a_stack->front, a_stack->rear);
	// for (int i = 0; i < 3; i++)
	// 	printf("bbbbbbbbbbb%d |", b_stack->data[(b_stack->front + 1 + i) % b_stack->len]);
	*/