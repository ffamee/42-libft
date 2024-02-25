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
	size_t	ans;

	if (!size)
		return (ft_strlen(src));
	else if (size < ft_strlen(dest))
		ans = size + ft_strlen(src);
	else
		ans = ft_strlen(dest) + ft_strlen(src);
	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && i + 1 < size)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (ans);
}
