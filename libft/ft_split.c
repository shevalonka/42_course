/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alshevch <alshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:53:10 by alshevch          #+#    #+#             */
/*   Updated: 2024/02/08 16:41:18 by alshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	counter_str(char const *str, char c)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (str[a] != '\0')
	{
		if (str[a] != c && (str[a + 1] == c || str[a + 1] == '\0'))
			b++;
		a++;
	}
	return (b);
}

char	**is_free(char **array)
{
	int	i;

	i = 0;
	while (array[i] != 0)
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (0);
}

static char	**s_fill(char const *s, char c, char **array)
{
	int		i;
	int		start;
	int		end;

	i = 0;
	end = 0;
	while (i < counter_str(s, c))
	{
		start = end;
		while (s[start] == c)
			start++;
		end = start;
		while (s[end] != c && s[end])
			end++;
		array[i] = ft_substr(s, start, (end - start));
		if (array[i] == 0)
		{
			is_free(array);
			return (0);
		}
		i++;
	}
	array[i] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;

	array = malloc((counter_str(s, c) + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	array = s_fill(s, c, array);
	if (!array)
		return (NULL);
	return (array);
}

// int	main(void)
// {
// 	char	**s;
// 	char	*c;
// 	int		i;

// 	i = 0;
// 	c = "daniela calle meneses";
// 	s = ft_split(c, 'a');
// 	while (s[i])
// 	{
// 		printf("%s\n", s[i]);
// 		i++;
// 	}
// 	return (0);
// }
