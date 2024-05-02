/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alshevch <alshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:14:20 by alshevch          #+#    #+#             */
/*   Updated: 2023/05/28 13:52:14 by alshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/* 
#include <unistd.h>
#include <stdio.h> 

int	main(void)
{
	int	a;
	int	b;

	a = 12;
	b = 44;
	printf("Before=%d, %d\n", a, b);
	ft_swap(&a, &b);
	printf("After=%d, %d\n", a, b);
	return (0);
}
 */