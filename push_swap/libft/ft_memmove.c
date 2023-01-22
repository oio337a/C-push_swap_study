/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohyupar <sohyupar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 16:05:05 by sohyupar          #+#    #+#             */
/*   Updated: 2022/07/20 15:56:25 by sohyupar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t count)
{
	size_t				i;
	unsigned char		*dest;
	const unsigned char	*source;

	i = 0;
	dest = dst;
	source = src;
	if (dest == NULL && source == NULL)
		return (0);
	if (dest > source)
	{
		while (count--)
			*(dest + count) = *(source + count);
	}
	else
	{
		while (i < count)
		{
			dest[i] = source[i];
			i++;
		}
	}
	return (dest);
}
