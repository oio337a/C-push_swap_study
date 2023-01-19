/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   greedy_algorithm2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohyupar <sohyupar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:33:48 by sohyupar          #+#    #+#             */
/*   Updated: 2023/01/19 11:46:18 by sohyupar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	cost_calculate(t_deque *a_stack, t_deque *b_stack)
{
	/*
	사전정렬 이후 pa를 할 최소 cost를 찾기.

		1. 최대 최소값 찾기. (bf의 값이 stack a로 들어가려할 때)
			최대값 -> b 최대값 바로 밑(idx 중간 이상이면 rra?), 
			최소값 -> a스택의 최소값 위 (기존 최소값 idx로 ra 횟수 지정)
		둘다 아니면 (af, af + 1로 ) ra, rra 카운트 수를 구합니다.

		모두 채웠을 때 마지막 정렬(rra 마무리?)
	*/

	int	a_top = a_stack->data[a_stack->front + 1];
	int b_top = b_stack->data[b_stack->front + 1];
	int	a_rear = a_stack->data[a_stack->rear];
	int b_rear = b_stack->data[b_stack->rear];

	a_stack->min = a_stack->data[a_stack->front + 1];
	a_stack->max = a_stack->data[a_stack->rear]; // 남은 3개에서도 정렬이 끝났으니 지정

	// loop 내부에서 a의 top, rear, b의 top, rear는 계속 재정의
	if (b_top < a_stack->min)
		pa(a_stack, b_stack->data[b_stack->front + 1]);
	else if (b_top > a_stack->max)
	{
		pa(a_stack, b_top);
		rra(a_stack);
	}
}
