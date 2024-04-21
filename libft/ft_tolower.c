/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alshevch <alshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:20:59 by alshevch          #+#    #+#             */
/*   Updated: 2024/01/05 17:29:52 by alshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c += 32);
	return (c);
}

// int	main(void)
// {
// 	char	small = 'a';
// 	char	big = 'A';
// 	printf("Before: %c\n", small);
// 	small = ft_tolower (small);
// 	printf("After: %c\n\n", small);
// 	printf("Before: %c\n", big);
// 	big = ft_tolower(big);
// 	printf("After: %c\n\n", big);
// }
