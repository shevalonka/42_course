/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alshevch <alshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:30:10 by alshevch          #+#    #+#             */
/*   Updated: 2024/04/24 17:48:28 by alshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_pointer(size_t c, int *length)
{
	ft_print_char('0', length);
	ft_print_char('x', length);
	if (c == 0)
		ft_print_char('0', length);
	else
		ft_print_base(c, H_LOW, length);
}
