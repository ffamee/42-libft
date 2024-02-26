/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalasut <smalasut@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 18:17:24 by smalasut          #+#    #+#             */
/*   Updated: 2024/02/26 18:17:24 by smalasut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*str;
	size_t	n;

	if (!s1 || !set)
		return (NULL);
	str = (char *)s1;
	while (ft_strchr(set, *str))
		str++;
	n = ft_strlen(str);
	while (n && ft_strchr(set, *(str + n - 1)))
		n--;
	return (ft_substr(str, 0, n));
}
