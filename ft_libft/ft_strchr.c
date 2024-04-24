/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alshevch <alshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:20:21 by alshevch          #+#    #+#             */
/*   Updated: 2024/01/06 15:18:31 by alshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	l;
	int		i;
	char	*str;

	i = 0;
	str = (char *) s;
	l = (char)c;
	while (str[i] != '\0')
	{
		if (str [i] == l)
			return (&str [i]);
		i++;
	}
	if (l == '\0')
		return (&str[i]);
	return (0);
}

// int	main(void)
// {
// 	char	*s;

// 	s = "Mudryk";
// 	printf("%s", ft_strchr(s, 'u'));
// }
