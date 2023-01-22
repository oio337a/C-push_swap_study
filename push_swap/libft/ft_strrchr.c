/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohyupar <sohyupar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 12:08:03 by sohyupar          #+#    #+#             */
/*   Updated: 2022/07/20 14:08:49 by sohyupar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int value)
{
	size_t	s_len;

	s_len = 0;
	while (s[s_len])
		s_len++;
	while (s_len && s[s_len] != (unsigned char)value)
		s_len--;
	if (s[s_len] == (unsigned char)value)
		return ((char *)(s + s_len));
	return (0);
}
