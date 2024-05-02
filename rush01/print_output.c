/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_output.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andeviei <andeviei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 17:36:24 by andeviei          #+#    #+#             */
/*   Updated: 2023/05/21 17:30:08 by andeviei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_digit(int digit)
{
	char	c;

	c = '0' + digit % 10;
	write(1, &c, 1);
}

void	print_error(void)
{
	write(1, "Error\n", 6);
}

void	print_results(int *result, int n)
{
	int	index;

	index = 0;
	while (index < n * n)
	{
		print_digit(result[index]);
		index++;
		if (index % n == 0)
			write(1, "\n", 1);
		else
			write(1, " ", 1);
	}
}
