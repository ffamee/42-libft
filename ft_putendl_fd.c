/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalasut <smalasut@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 21:46:48 by smalasut          #+#    #+#             */
/*   Updated: 2024/02/26 21:46:48 by smalasut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
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
	write(fd, "\n", 1);
	return ;
}
