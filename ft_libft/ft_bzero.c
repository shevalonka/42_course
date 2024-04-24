/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alshevch <alshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:19:28 by alshevch          #+#    #+#             */
/*   Updated: 2023/12/18 17:09:50 by alshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	unsigned char	*pont;

	pont = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		pont[i] = '\0';
		i++;
	}
}

// int	main(void)
// {
// 	char	s[39]= "blablabla";
// 	printf("antes %s\n", s);
// 	ft_bzero(s, 3);
// 	printf("antes%s", s);
// 	return (0);
// }
