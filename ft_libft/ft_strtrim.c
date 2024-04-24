/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alshevch <alshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:16:00 by alshevch          #+#    #+#             */
/*   Updated: 2024/01/19 15:29:52 by alshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*res;

	start = 0;
	if (!set[start] || !s1[start])
		return (ft_strdup(s1));
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	if (!s1[start])
		return (ft_strdup(&s1[start]));
	end = ft_strlen(s1) -1;
	while (ft_strchr(set, s1[end]))
		end--;
	res = malloc((end - start + 2) * sizeof(char));
	if (!res)
		return (NULL);
	i = -1;
	while (++i < end - start + 1)
		res[i] = s1[start + i];
	res[i] = '\0';
	return (res);
}

// int	main(void)
// {
// 	char	*s;
// 	char	*e;

// 	s = "allo ce hto";
// 	e = "to";
// 	printf("%s", ft_strtrim(s, e));
// }
