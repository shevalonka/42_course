/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alshevch <alshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:48:00 by alshevch          #+#    #+#             */
/*   Updated: 2024/02/07 17:58:53 by alshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// int main(void)
// {
//     // Створення зв'язаного списку з двох вузлів
//     t_list a;
//     t_list b;

//     // Ініціалізація вмісту та вказівників
//     a.content = "hello";
//     a.next = &b;

//     b.content = "world";
//     b.next = NULL;

//     // Визначення розміру списку та виведення його на екран
//     printf("Size of the list: %d\n", ft_lstsize(&a));

//     return 0;
// }