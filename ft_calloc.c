/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalasut <smalasut@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:22:08 by smalasut          #+#    #+#             */
/*   Updated: 2024/02/26 15:22:08 by smalasut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = NULL;
	if (!nmemb || !size)
		return (ptr);
	ptr = (void *)malloc(nmemb * size);
	if (!ptr)
		return (ptr);
	return (ft_memset(ptr, 0, nmemb * size));
}
