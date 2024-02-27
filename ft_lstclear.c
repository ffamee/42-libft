/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalasut <smalasut@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:40:10 by smalasut          #+#    #+#             */
/*   Updated: 2024/02/27 21:24:13 by smalasut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*pos;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		pos = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(pos, del);
	}
}
