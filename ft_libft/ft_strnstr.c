/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alshevch <alshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:20:54 by alshevch          #+#    #+#             */
/*   Updated: 2024/01/10 13:58:39 by alshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*big;
	char	*little;
	size_t	i;
	size_t	j;

	big = (char *)haystack;
	little = (char *)needle;
	i = 0;
	if (little[i] == '\0')
		return (big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (little[j] == big[i + j] && i + j < len)
		{
			if (little[j + 1] == '\0')
				return (&big[i]);
			j++;
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	big[] = "Holam undoooo!";
// 	char	little[] = "";
// 	char	*result;
// 	result = ft_strnstr(big, little, 10);
// 	printf("resultado: %s\n", result);
// 	return (0);
// }
