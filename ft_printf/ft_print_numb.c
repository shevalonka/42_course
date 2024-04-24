/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alshevch <alshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:56:38 by alshevch          #+#    #+#             */
/*   Updated: 2024/04/24 16:37:10 by alshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_numb(int c, int *length)
{
	if (c == -2147483648)
	{
		ft_print_str("-2147483648", length);
	}
	else if (c < 0)
	{
		ft_print_char('-', length);
		ft_print_numb(c * -1, length);
	}
	else if (c > 9)
	{
		ft_print_numb(c / 10, length);
		ft_print_numb(c % 10, length);
	}
	else
		ft_print_char(c + 48, length);
}

// int main(void)
// {
//     int length = 0;

//     ft_print_numb(12345, &length);
//     return 0;
// }