/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alshevch <alshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:29:22 by alshevch          #+#    #+#             */
/*   Updated: 2024/04/24 17:59:05 by alshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_base(size_t c, char *base, int *length)
{
	size_t	len;

	len = 0;
	while (base[len] != '\0')
		len++;
	if (c >= len && len != 0)
	{
		ft_print_base(c / len, base, length);
		ft_print_base(c % len, base, length);
	}
	else
		ft_print_char(base[c], length);
}
