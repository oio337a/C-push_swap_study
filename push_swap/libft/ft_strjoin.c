/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohyupar <sohyupar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 14:34:18 by sohyupar          #+#    #+#             */
/*   Updated: 2022/07/20 14:38:21 by sohyupar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*add_s;
	size_t	s1_l;
	size_t	s2_l;

	if (!s1 || !s2)
		return (0);
	s1_l = ft_strlen((char *)s1);
	s2_l = ft_strlen((char *)s2);
	add_s = (char *)malloc(sizeof(char) * (s1_l + s2_l + 1));
	if (!add_s)
		return (0);
	ft_memcpy(add_s, s1, s1_l);
	ft_memcpy(add_s + s1_l, s2, s2_l);
	add_s[s1_l + s2_l] = 0;
	return (add_s);
}
