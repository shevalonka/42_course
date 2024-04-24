/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alshevch <alshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:20:16 by alshevch          #+#    #+#             */
/*   Updated: 2023/12/21 17:28:47 by alshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*ptr1;
	char	*ptr2;

	i = 0;
	ptr1 = (char *)src;
	ptr2 = (char *)dst;
	if (src == dst)
		return (dst);
	if (src < dst)
	{
		while (len-- > 0)
			ptr2[len] = ptr1[len];
	}
	else
	{
		while (i < len)
		{
			ptr2[i] = ptr1[i];
			i++;
		}
	}
	return (ptr2);
}

// int	main(void)
// {
// 	char	src[] = "hola, mundo!";
// 	char	dst[] = "adios, gente!";

// 	printf("BEFORE: %s\n", dst);
// 	ft_memmove(dst, src, 10);
// 	printf("AFTER: %s\n", dst);
// 	return (0);
// }
