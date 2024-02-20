/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalasut <smalasut@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:14:17 by smalasut          #+#    #+#             */
/*   Updated: 2024/02/20 19:18:51 by smalasut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			ind;
	unsigned char	*ptr;

	ind = 0;
	ptr = s;
	while (ind < n)
	{
		ptr[ind] = 0;
		ind++;
	}
	return ;
}
