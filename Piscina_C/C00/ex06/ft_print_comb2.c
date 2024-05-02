/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alshevch <alshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 18:39:36 by alshevch          #+#    #+#             */
/*   Updated: 2023/05/20 20:25:14 by alshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{	
	int	a;
	int	b;
	int	c;

	a = -1;
	while (a++ < 98)
	{
		b = a;
		while (b++ < 99)
		{
			c = (a / 10) + '0';
			write (1, &c, 1);
			c = (a % 10) + '0';
			write (1, &c, 1);
			write(1, " ", 1);
			c = (b / 10) + '0';
			write (1, &c, 1);
			c = (b % 10) + '0';
			write (1, &c, 1);
			if (a != 98 || b != 99)
				write (1, ", ", 2);
		}
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
