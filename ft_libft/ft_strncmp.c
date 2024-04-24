/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alshevch <alshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:21:26 by alshevch          #+#    #+#             */
/*   Updated: 2024/01/06 18:35:51 by alshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	while (i < n)
	{
		if (str1[i] < str2[i])
			return (-1);
		else if (str1[i] > str2[i])
			return (1);
		if (str1[i] == '\0' || str2 == NULL)
			break ;
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	*a;
// 	char	*b;

// 	a = "alo";
// 	b = "nealo";
// 	printf("%d", ft_strncmp(a, b, 8));
// 	return (0);
// }
