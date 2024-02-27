/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalasut <smalasut@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 21:35:30 by smalasut          #+#    #+#             */
/*   Updated: 2024/02/26 21:35:30 by smalasut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	n;
	size_t	i;

	if (!s)
		return ;
	n = ft_strlen(s);
	i = 0;
	while (i < n)
	{
		f(i, &(s[i]));
		i++;
	}
	return ;
}
