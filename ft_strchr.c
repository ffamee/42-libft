/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalasut <smalasut@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 22:56:32 by smalasut          #+#    #+#             */
/*   Updated: 2024/02/24 22:56:32 by smalasut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	if (!s)
		return ((char *)s);
	ptr = (char *)s;
	while (*ptr && *ptr != (char)c)
	{
		ptr++;
	}
	if (*ptr == (char)c)
		return (ptr);
	return (NULL);
}
