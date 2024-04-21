/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alshevch <alshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:28:24 by alshevch          #+#    #+#             */
/*   Updated: 2024/01/24 18:17:35 by alshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int a)
{
	int	i;

	i = 0;
	if (a <= 0)
		i = 1;
	while (a != 0)
	{
		i++;
		a = a / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		size;
	int		size2;
	long	num;

	num = n;
	size = ft_count(num);
	size2 = size;
	str = ft_calloc((size2 + 1), sizeof(char));
	if (!str)
		return (NULL);
	if (num < 0)
	{
		num = num * (-1);
		str[0] = '-';
	}
	while ((size > 0 && str[0] != '-') || ((str[0] == '-') && size > 1))
	{
		str[size - 1] = (num % 10) + 48;
		num = num / 10;
		size--;
	}
	return (str);
}

// int	main(void)
// {
// 	int	str;

// 	str = -2147483648;
// 	printf("%s", ft_itoa(str));
// 	return (0);
// }
