/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohyupar <sohyupar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 14:38:32 by sohyupar          #+#    #+#             */
/*   Updated: 2022/07/20 14:42:22 by sohyupar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_find_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*not_set;
	size_t	start;
	size_t	end;
	size_t	i;

	i = 0;
	if (!s1 || !set)
		return (0);
	start = 0;
	while (s1[start] && ft_find_set(s1[start], set))
		start++;
	end = ft_strlen((char *)s1);
	while (end > start && ft_find_set(s1[end - 1], set))
		end--;
	not_set = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!not_set)
		return (0);
	while (start < end)
	{
		not_set[i] = s1[start];
		i++;
		start++;
	}
	not_set[i] = '\0';
	return (not_set);
}
