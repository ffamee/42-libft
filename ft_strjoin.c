/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalasut <smalasut@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:20:12 by smalasut          #+#    #+#             */
/*   Updated: 2024/02/26 17:20:12 by smalasut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*join;
	size_t	i;
	size_t	j;
	size_t	si;
	size_t	sj;

	si = 0;
	sj = 0;
	if (s1)
		si = ft_strlen(s1);
	if (s2)
		sj = ft_strlen(s2);
	join = (char *)malloc((si + sj + 1));
	if (!join)
		return (NULL);
	i = 0;
	j = 0;
	while (si && s1[j])
		join[i++] = s1[j++];
	j = 0;
	while (sj && s2[j])
		join[i++] = s2[j++];
	join[i] = '\0';
	return (join);
}
