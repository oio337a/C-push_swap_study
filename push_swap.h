/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohyupar <sohyupar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:57:03 by sohyupar          #+#    #+#             */
/*   Updated: 2023/01/09 20:53:24 by sohyupar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define ERROR -1
# include <stdlib.h>
# include <unistd.h>

typedef struct s_array
{
	int	*element;
	int	front;
	int	rear;
	int	len;
}	t_array;

void	init(t_array *q);
int		is_full(t_array *q);
int		is_empty(t_array *q);
int		ft_atoi(const char *str);
void	add_front(t_array *q, int data);
void	delete_rear(t_array *q);
#endif