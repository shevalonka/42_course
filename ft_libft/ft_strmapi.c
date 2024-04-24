/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alshevch <alshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 14:28:43 by alshevch          #+#    #+#             */
/*   Updated: 2024/01/26 16:24:43 by alshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;

	if (!s || !f)
		return (NULL);
	str = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}

// char	fun(unsigned int k, char c)
// {
// 	int	i;

// 	i = k;
// 	return (c - 3);
// }

// int	main(void)
// {
// 	char	*d;

// 	d = ft_strmapi("Dorqd#Vkhyfkhqnr", fun);
// 	printf("%s", d);
// 	free(d);
// 	return (0);
// }
