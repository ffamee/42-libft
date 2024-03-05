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

static int	wfree(char ***ans, char *ptr, size_t n, size_t *i)
{
	(*ans)[*i] = ft_substr(ptr, 0, n);
	if (!((*ans)[*i]))
	{
		while (*i >= 0)
		{
			free((*ans)[*i]);
			(*i)--;
		}
		free(*ans);
		return (0);
	}
	(*i)++;
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

static char	**put(char ***ans, char *ptr, char c)
{
	size_t	n;
	size_t	i;

	i = 0;
	while (*ptr)
	{
		while (*ptr && *ptr == c)
			ptr++;
		n = 0;
		while (*(ptr + n) && *(ptr + n) != c)
			n++;
		if (n == 0)
			continue ;
		if (!wfree(ans, ptr, n, &i))
			return (NULL);
		ptr += n;
	}
	(*ans)[i] = NULL;
	return (*ans);
}

char	**ft_split(const char *s, char c)
{
	size_t	size;
	char	*ptr;
	char	**ans;

	if (!s)
		return (NULL);
	ans = NULL;
	size = cword(s, c) + 1;
	ans = (char **)malloc(size * sizeof(char *));
	if (!ans)
		return (NULL);
	ptr = (char *)s;
	return (put(&ans, ptr, c));
}
