/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalasut <smalasut@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 18:31:41 by smalasut          #+#    #+#             */
/*   Updated: 2024/02/26 18:31:41 by smalasut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wfree(char ***ans, char *ptr, size_t n, size_t size)
{
	static int	i = 0;
	size_t		k;

	(*ans)[i] = ft_substr(ptr, 0, n);
	if (!((*ans)[i]))
	{
		k = 0;
		while (k < size)
		{
			free((*ans)[k]);
			k++;
		}
		free(*ans);
		return (0);
	}
	i++;
	return (1);
}

static size_t	cword(const char *ptr, char c)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	while (ptr[i])
	{
		while (ptr[i] == c)
			i++;
		if (ptr[i])
			n++;
		while (ptr[i] && ptr[i] != c)
			i++;
	}
	return (n);
}

static size_t	init(const char *s, char c, char ***ans)
{
	size_t	size;

	if (!s)
		return (0);
	size = cword(s, c) + 1;
	*ans = (char **)malloc(size * sizeof(char *));
	if (!(*ans))
		return (0);
	return (size);
}

static char	**put(char ***ans, char *ptr, char c, size_t size)
{
	size_t	n;

	while (*ptr)
	{
		while (*ptr && *ptr == c)
			ptr++;
		n = 0;
		while (*(ptr + n) && *(ptr + n) != c)
			n++;
		if (n == 0)
			continue ;
		if (!wfree(ans, ptr, n, size))
			return (NULL);
		ptr += n;
	}
	(*ans)[size - 1] = NULL;
	return (*ans);
}

char	**ft_split(const char *s, char c)
{
	size_t	size;
	char	*ptr;
	char	**ans;

	ans = NULL;
	size = init(s, c, &ans);
	if (!init(s, c, &ans))
		return (NULL);
	ptr = (char *)s;
	return (put(&ans, ptr, c, size));
}
