/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alshevch <alshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 19:42:39 by alshevch          #+#    #+#             */
/*   Updated: 2024/02/07 17:57:38 by alshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

// int main(void)
// {
//     // Створення зв'язаного списку з трьох вузлів
//     t_list a = {"Hi 1", NULL};
//     t_list b = {"Hi 2", NULL};
//     t_list c = {"Hi 3", NULL};

//     // З'єднання вузлів у зв'язаний список
//     a.next = &b;
//     b.next = &c;

//     // Перевірка, чи вказує на останній вузол
//     if (ft_lstlast(&a))
//         printf("The last: %s\n", (char *)ft_lstlast(&a)->content);
//     else
//         printf("The list is empty.\n");

//     return 0;
// }