/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalasut <smalasut@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:38:49 by smalasut          #+#    #+#             */
/*   Updated: 2024/02/20 19:01:41 by smalasut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			ind;
	unsigned char	*ptr;

	ptr = s;
	while (ind < n)
	{
		ptr[ind] = c;
		ind++;
	}
	return (s);
}
