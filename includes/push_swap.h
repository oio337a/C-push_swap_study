/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohyupar <sohyupar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:06:30 by sohyupar          #+#    #+#             */
/*   Updated: 2023/01/18 17:21:43 by sohyupar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define ERROR -1

# include "../libft/libft.h"
# include <unistd.h>
# include <stdlib.h>

// 이건 평가전 지워야 합니다.
#include <stdio.h>
//

typedef struct s_deque
{
	int	*data;
	int	front;
	int	rear;
	int	len;
}t_deque;

t_deque	*init(int len);
int		*get_pivot(t_deque *q);
void	add_front(t_deque *q, int data);
void	add_rear(t_deque *q, int data);
void	delete_front(t_deque *q);
int		find_idx(int i, int len);
void	delete_rear(t_deque *q);
void	pa(t_deque *stack_a, t_deque *stack_b);
void	pb(t_deque *stack_a, t_deque *stack_b);
void	sa(t_deque *stack_b);
void	sb(t_deque *stack_a);
void	ss(t_deque *stack_a, t_deque *stack_b);
void	ra(t_deque *stack_a);
void	rb(t_deque *stack_b);
void	rr(t_deque *stack_a, t_deque *stack_b);
void	rra(t_deque *stack_a);
void	rrb(t_deque *stack_b);
void	rrr(t_deque *stack_a, t_deque *stack_b);

int		error(void);
void	ft_free(char *strs[]);

int		ft_atoi2(const char *str);
void	preprocess(t_deque *a_stack, t_deque *b_stack);
int		is_empty(t_deque *q);

#endif