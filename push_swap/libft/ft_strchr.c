/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohyupar <sohyupar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:11:02 by sohyupar          #+#    #+#             */
/*   Updated: 2022/07/20 14:08:32 by sohyupar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int value)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char )value)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == value)
		return ((char *)s + i);
	return (0);
}
