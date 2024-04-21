/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alshevch <alshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:20:06 by alshevch          #+#    #+#             */
/*   Updated: 2024/01/08 15:37:14 by alshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	l;

	i = 0;
	str = (unsigned char *) s;
	l = (unsigned char) c;
	while (i < n)
	{
		if ((unsigned char) str[i] == (unsigned char) l)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	str[] = "Hola bobo";
// 	char	*result = (char *)ft_memchr(str, 'j', 10);

// 	if (result != NULL)
// 		printf("YES: %c\n", *result);
// 	else
// 		printf("NO.\n");
// 	return (0);
// }
