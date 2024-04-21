/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alshevch <alshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:20:42 by alshevch          #+#    #+#             */
/*   Updated: 2023/12/26 14:29:57 by alshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
	{
	size_t	src_len;
	size_t	i;

	i = 0;
	src_len = ft_strlen(src);
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < dstsize -1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_len);
}

//int	main(void)
//{
//	char	src[22];
//	char	dest[22];
//
//	ft_strlcpy (dest, "cosas del nuevo mundo", sizeof(src));
//	ft_strlcpy (src, "hola mundo", sizeof(src));
//	printf ("%zu | %s", ft_strlcpy(dest, src, 22), dest);
//	return (0);
//}
