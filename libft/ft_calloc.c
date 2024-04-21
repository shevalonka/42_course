/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alshevch <alshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:11:26 by alshevch          #+#    #+#             */
/*   Updated: 2024/01/11 18:41:57 by alshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char			*mem;
	unsigned int	i;

	i = 0;
	mem = malloc(count * size);
	if (mem == NULL)
		return (0);
	while (i < count * size)
	{
		mem[i] = 0;
		i++;
	}
	return (mem);
}

// int	main(void)
// {
// 	char	*mem;

// 	mem = "daniela";
// 	printf("%s", mem);
// 	 mem = ft_calloc(ft_strlen(mem), sizeof(char));
// 	printf("%s\n", mem);
// }