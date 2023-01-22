/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohyupar <sohyupar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:29:03 by sohyupar          #+#    #+#             */
/*   Updated: 2023/01/18 16:05:23 by sohyupar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long long	ft_abs(int n)
{
	long long	abs;

	abs = n;
	if (n < 0)
	{
		abs *= -1;
		return (abs);
	}
	return (abs);
}

static int	ft_len(int n, long long abs)
{
	unsigned int	len;

	len = 1;
	if (n < 0)
		len++;
	while (abs > 9)
	{
		abs /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*str;
	long long		abs;
	unsigned int	len;

	abs = ft_abs(n);
	len = ft_len(n, abs);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
		str[0] = '-';
	str[len] = '\0';
	while (abs && len > 0)
	{
		str[--len] = abs % 10 + '0';
		abs /= 10;
	}
	return (str);
}
