/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alshevch <alshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:20:56 by alshevch          #+#    #+#             */
/*   Updated: 2024/01/06 15:58:38 by alshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	l;
	int		i;
	char	*str;

	i = ft_strlen(s);
	str = (char *)s;
	l = (char)c;
	if (l == '\0')
		return (&str[i]);
	while (i >= 0)
	{
		if (l == str[i])
			return (&str[i]);
		i--;
	}
	return (0);
}

// int	main(void)
// {
// 	char	*s;

// 	s = "Aloneno";
// 	printf("%s", ft_strrchr(s, 'e'));
// 	return (0);
// }
