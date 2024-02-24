/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalasut <smalasut@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 23:25:19 by smalasut          #+#    #+#             */
/*   Updated: 2024/02/24 23:25:19 by smalasut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	if (!s)
		return ((char *)s);
	ptr = (char *)s;
	while (*ptr)
		ptr++;
	while (ptr != (char *)s && *ptr != (char)c)
	{
		ptr--;
	}
	if (*ptr == (char)c)
		return (ptr);
	return (NULL);
}
