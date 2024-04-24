/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alshevch <alshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:31:11 by alshevch          #+#    #+#             */
/*   Updated: 2024/01/19 15:45:58 by alshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*res1;
	char			*res2;

	if (!s1 || !s2)
		return (NULL);
	res1 = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	res2 = res1;
	if (!res1)
		return (NULL);
	while (*s1 != '\0')
		*res2++ = *s1++;
	while (*s2 != '\0')
		*res2++ = *s2++;
	*res2 = '\0';
	return (res1);
}

// int	main(void)
// {
// 	char	*s;
// 	char	*r;

// 	s = "aloha";
// 	r = "verde";
// 	printf("%s", ft_strjoin(s, r));
// 	return (0);
// }
