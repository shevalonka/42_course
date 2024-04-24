/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alshevch <alshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:49:34 by alshevch          #+#    #+#             */
/*   Updated: 2024/02/04 19:05:05 by alshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*memory;

	i = start;
	j = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s) || start < 0 || len < 0)
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	memory = malloc(sizeof(char) * (len + 1));
	if (!memory)
		return (NULL);
	while (s && len && j < len)
	{
		memory[j] = s[i];
		i++;
		j++;
	}
	memory[j] = '\0';
	return (memory);
}

// int	main(void)
// {
// 	printf("%s", ft_substr("keep coding", 2, 4));
// 	return (0);
// }
