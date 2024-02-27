/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalasut <smalasut@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 22:41:26 by smalasut          #+#    #+#             */
/*   Updated: 2024/02/25 22:41:26 by smalasut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	char	*ps1;
	char	*ps2;
	size_t	i;
	size_t	n;

	ps1 = (char *)s1;
	ps2 = (char *)s2;
	if (!len && !ps1)
		return (ps1);
	i = 0;
	n = ft_strlen(ps2);
	if (!n)
		return (ps1);
	while (*ps1 && i + n <= len)
	{
		if (*ps1 == *ps2 && ft_strncmp(ps1, ps2, n) == 0)
			return (ps1);
		ps1++;
		i++;
	}
	return (NULL);
}
