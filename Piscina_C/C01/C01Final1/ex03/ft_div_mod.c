/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alshevch <alshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 12:28:45 by alshevch          #+#    #+#             */
/*   Updated: 2023/05/30 11:48:51 by alshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*#include <stdio.h>

int	main(void)
{
	int div;
	int	mod;
	int	a;
	int	b;

	a = 5;
	b = 2;
	ft_div_mod(a, b, &div, &mod);
	printf("primero %d %d\n", a, b);
	printf("primero %d %d\n", div, mod);
	return (0);
} */
