/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalasut <smalasut@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:38:49 by smalasut          #+#    #+#             */
/*   Updated: 2024/02/24 21:24:17 by smalasut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			ind;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (ind < n)
	{
		ptr[ind] = c;
		ind++;
	}
	return (s);
}
