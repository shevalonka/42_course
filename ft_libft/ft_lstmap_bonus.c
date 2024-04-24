/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alshevch <alshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:46:28 by alshevch          #+#    #+#             */
/*   Updated: 2024/02/07 17:58:28 by alshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*p;
	t_list	*c;
	void	*content;

	p = 0;
	if (!lst || !f || !del)
		return (0);
	while (lst)
	{
		content = f(lst->content);
		c = ft_lstnew(content);
		if (!c)
		{
			del(content);
			ft_lstclear(&p, del);
			return (0);
		}
		ft_lstadd_back(&p, c);
		lst = lst->next;
	}
	return (p);
}
