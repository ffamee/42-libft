/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalasut <smalasut@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 20:57:30 by smalasut          #+#    #+#             */
/*   Updated: 2024/02/26 20:57:30 by smalasut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	len(int n)
{
	size_t	s;

	if (n == -2147483648)
		return (11);
	if (n == 0)
		return (1);
	s = 0;
	if (n < 0)
	{
		s = 1;
		n = -n;
	}
	while (n)
	{
		n /= 10;
		s++;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	size_t	size;
	char	*ptr;

	size = len(n);
	ptr = (char *)malloc((size + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[size--] = '\0';
	if (n == -2147483648)
	{
		ptr[size--] = '8';
		n /= 10;
	}
	if (n < 0)
	{
		n = -n;
		ptr[0] = '-';
	}
	while (n >= 10)
	{
		ptr[size--] = (n % 10) + '0';
		n /= 10;
	}
	ptr[size] = n + '0';
	return (ptr);
}
