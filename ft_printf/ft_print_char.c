/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alshevch <alshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:55:49 by alshevch          #+#    #+#             */
/*   Updated: 2024/04/24 18:34:35 by alshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_char(char c, int *length)
{
	write(1, &c, 1);
	*length = *length + 1;
}

// int	main(void)
// {
// 	int length;

// 	length = 100;
// 	ft_print_char('d', &length);
//     return 0;
// }