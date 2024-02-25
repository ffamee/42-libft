/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalasut <smalasut@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 22:29:28 by smalasut          #+#    #+#             */
/*   Updated: 2024/02/25 22:29:28 by smalasut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memrchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	if (!s)
		return ((void *)s);
	ptr = (unsigned char *)s;
	n--;
	while (n >= 0)
	{
		if (ptr[n] == (unsigned char)c)
			return ((void *)(ptr + n));
		n--;
	}
	return (0);
}
