/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmipa <yongmipa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 17:36:28 by yongmipa          #+#    #+#             */
/*   Updated: 2023/01/09 21:04:27 by yongmipa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <unistd.h>

int	print_error(char *msg)
{
	ft_putendl_fd("Error", STDERR_FILENO);
	ft_putendl_fd(msg, STDERR_FILENO);
	return (EXIT_FAILURE);
}
