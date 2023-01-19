/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohyupar <sohyupar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:07:26 by sohyupar          #+#    #+#             */
/*   Updated: 2023/01/19 15:34:18 by sohyupar         ###   ########.fr       */
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

int main(int ac, char *av[])
{
	int		len;
	t_deque	*a_stack;

	if (ac < 2)
		return (1);
	len = count_argu(ac, av);
	a_stack = init(len);
	
	return (0);
}
