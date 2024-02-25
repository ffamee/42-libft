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
	size_t			i;

	if (!s)
		return ((void *)s);
	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[n] == (unsigned char)c)
			return ((void *)(ptr + n - i - 1));
		i++;
	}
	return (0);
}
