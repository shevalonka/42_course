/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsgn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alshevch <alshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 17:34:56 by alshevch          #+#    #+#             */
/*   Updated: 2024/04/21 19:19:05 by alshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_unsgn(unsigned int c, int *length)
{
	if (c < 0)
	{
		ft_print_unsgn(c * -1, length);
	}
	else if (c > 9)
	{
		ft_print_unsgn(c / 10, length);
		ft_print_unsgn(c % 10, length);
	}
	else
		ft_print_char(c + 48);
}

// int main(void)
// {
//     int length = 0;
//     ft_print_unsgn(12345, &length);
//     return 0;
// }