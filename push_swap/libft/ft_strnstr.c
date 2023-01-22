/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohyupar <sohyupar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 12:30:43 by sohyupar          #+#    #+#             */
/*   Updated: 2022/07/20 14:32:46 by sohyupar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *match, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*match == '\0')
		return ((char *)s);
	while (s[i] && i < len)
	{
		j = 0;
		while (s[i + j] == match[j] && i + j < len)
		{
			if (match[j + 1] == '\0')
				return ((char *)&s[i]);
			j++;
		}
		i++;
	}
	return (0);
}
