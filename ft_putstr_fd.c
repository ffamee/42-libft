/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalasut <smalasut@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 21:44:39 by smalasut          #+#    #+#             */
/*   Updated: 2024/02/26 21:44:39 by smalasut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	n;
	size_t	i;

	n = ft_strlen(s);
	i = 0;
	while (i < n)
	{
		write(fd, s, 1);
		i++;
		s++;
	}
	return ;
}
