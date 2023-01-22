/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohyupar <sohyupar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 08:55:17 by sohyupar          #+#    #+#             */
/*   Updated: 2022/07/20 14:48:20 by sohyupar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int c, size_t size)
{
	const unsigned char	*p = (const unsigned char *)ptr;
	const unsigned char	value = (const unsigned char) c;
	size_t				i;

	i = 0;
	while (i < size)
	{
		if (p[i] == value)
			return ((void *)p + i);
		i++;
	}
	return (0);
}
