/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alshevch <alshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:12:54 by alshevch          #+#    #+#             */
/*   Updated: 2024/02/07 17:23:10 by alshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*c;
	t_list	*tmp;

	c = *lst;
	while (c)
	{
		tmp = c->next;
		del(c->content);
		free(c);
		c = tmp;
	}
	*lst = 0;
}
