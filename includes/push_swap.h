/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:47:48 by yongmipa          #+#    #+#             */
/*   Updated: 2023/01/13 18:31:44 by yongmipa         ###   ########seoul.kr  */
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

int		print_error(void);
void	is_validate_argument(int ac, char const *av[]);
t_stack	*init_stack(int ac);
void	fill_stack(t_stack *stack, int ac, char const *av[]);

int		is_empty(t_stack *stack);
void	add_front(t_stack *stack, int data);
void	add_rear(t_stack *stack, int data);
void	delete_front(t_stack *stack);
void	delete_rear(t_stack *stack);

void	rotate_stack(t_stack *stack);
void	reverse_rotate_stack(t_stack *stack);
void	swap_stack(t_stack *stack);

#endif