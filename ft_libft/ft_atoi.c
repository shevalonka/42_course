/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alshevch <alshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:18:30 by alshevch          #+#    #+#             */
/*   Updated: 2024/02/06 18:13:27 by alshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
	while (((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		num = (str[i] - '0') + (num * 10);
		i++;
	}
	return (num * sign);
}

// int	main(void)
// {
// 	const char	*s = "--1";
// 	int i=atoi(s);
// 	int	e=ft_atoi(s);
// 	printf("normal=%d\n",i);
// 	printf("ft=%d\n",e);
// }
