/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:47:48 by yongmipa          #+#    #+#             */
/*   Updated: 2023/01/10 19:54:24 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define TRUE	1
# define FALSE	0

# include "../libft/libft.h"
# include <stddef.h>
# include <stdio.h>

typedef struct s_stack
{
	int	*data;
	int	front;
	int	rear;
	int	len;
}	t_stack;

int		print_error(char *msg);
void	init_stack(t_stack *stack, int ac);
void	fill_stack(t_stack *stack, int ac, char const *av[]);

#endif