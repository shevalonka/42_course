/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alshevch <alshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:20:12 by alshevch          #+#    #+#             */
/*   Updated: 2023/12/21 17:35:42 by alshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*ptr1;
	char	*ptr2;
	size_t	i;

	i = 0;
	ptr1 = (char *)dst;
	ptr2 = (char *)src;
	if (ptr1 == 0 && ptr2 == 0)
		return (0);
	if (ptr1 == ptr2 || n == 0)
		return (dst);
	while (i < n)
	{
		ptr1[i] = ptr2[i];
		i++;
	}
	return (dst);
}

// int	main(void)
// {
// 	char	str[40] = "hola";
// 	char	dst[40] = "adios";

// 	printf("before: %s\n", dst);
// 	ft_memcpy(dst, str, 3);
// 	printf("after: %s\n", dst);
// 	return (0);
// }
