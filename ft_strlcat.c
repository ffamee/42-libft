/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalasut <smalasut@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 22:33:59 by smalasut          #+#    #+#             */
/*   Updated: 2024/02/24 22:33:59 by smalasut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	if (!src)
		return (ft_strlen(dest));
	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && i + 1 < size)
		dest[i++] = src[j++];
	return (ft_strlen(dest));
}
