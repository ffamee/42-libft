/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalasut <smalasut@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 22:57:43 by smalasut          #+#    #+#             */
/*   Updated: 2024/02/25 22:57:43 by smalasut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	char		*ptr;
	int			s;
	long long	l;

	if (!nptr)
		return (0);
	ptr = (char *)nptr;
	while (*ptr == ' ' || *ptr == '\t' || *ptr == '\n'
			|| *ptr == '\v' || *ptr == '\f' || *ptr == '\r')
		ptr++;
	if (*ptr == '+' || *ptr == '-')
	{
		if (*ptr == '-')
			s = -1;
		ptr++;
	}
	l = 0;
	while (ft_isdigit(*ptr))
	{
		l = (l * 10) + (*ptr - '0');
		ptr++;
	}
	return ((int)(s * l));
}
