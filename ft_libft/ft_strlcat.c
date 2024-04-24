/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alshevch <alshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:20:23 by alshevch          #+#    #+#             */
/*   Updated: 2024/02/07 17:59:57 by alshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	src_len;
	size_t	dst_len;

	i = 0;
	j = 0;
	while (dst[j] != '\0')
	{
		j++;
	}
	dst_len = j;
	src_len = ft_strlen(src);
	if (size == 0 || size <= dst_len)
	{
		return (src_len + size);
	}
	while (src[i] != '\0' && i < size - dst_len - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dst_len + src_len);
}

// int	main(void)
// {
// 	char	s[30] = "aloha";
// 	char	*r;

// 	r = "hello";
// 	printf("%zu, %s", ft_strlcat(s, r, 13), s);
// }
