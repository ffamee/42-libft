/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalasut <smalasut@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 22:32:57 by smalasut          #+#    #+#             */
/*   Updated: 2024/02/25 22:32:57 by smalasut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ps1;
	unsigned char	*ps2;

	if (!n)
		return (0);
	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;
	i = 0;
	while (i < n && ps1[i] && ps2[i])
	{
		if (ps1[i] != ps2[i])
			return ((unsigned char)ps1[i] - (unsigned char)ps2[i]);
		i++;
	}
	return ((unsigned char)ps1[i] - (unsigned char)ps2[i]);
}
