/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alshevch <alshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:42:32 by alshevch          #+#    #+#             */
/*   Updated: 2024/01/11 18:19:51 by alshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	size;
	char	*dup;

	size = ft_strlen(s1) +1;
	dup = malloc(size * sizeof(char));
	if (!dup)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

// int	main(void)
// {
// 	char	*s;
// 	char	*dup;

// 	s = "hola everybady";
// 	dup = ft_strdup(s);
// 	printf("%s", dup);
// }
