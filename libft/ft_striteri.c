/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alshevch <alshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:19:21 by alshevch          #+#    #+#             */
/*   Updated: 2024/01/31 17:17:56 by alshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void	fu(unsigned int i, char *c)
// {
// 	i = 0;
// 	while (c[i])
// 	{
// 		c[i] = 'M';
// 		i++;
// 	}
// }

// int	main(void)
// {
// 	char	d[] = "Coco Cola";

// 	ft_striteri(d, &fu);
// 	printf("%s", d);
// 	return (0);
// }
