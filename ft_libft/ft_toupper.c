/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alshevch <alshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:21:03 by alshevch          #+#    #+#             */
/*   Updated: 2024/01/05 16:45:37 by alshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c -= 32);
	}
	return (c);
}

// int	main(void)
// {
// 	char	lowercase = 'a';
// 	char	uppercase = 'A';
// 	char	nonAlp = '1';

// 	printf("Before: %c\n", lowercase);
// 	lowercase = ft_toupper(lowercase);
// 	printf("After: %c\n\n", lowercase);
// 	printf("Before: %c\n", uppercase);
// 	uppercase = ft_toupper(uppercase);
// 	printf("After: %c\n\n", uppercase);
// 	printf("Before: %c\n", nonAlp);
// 	nonAlph = ft_toupper(nonAlp);
// 	printf("After: %c\n", nonAlp);
// 	return (0);
// }
