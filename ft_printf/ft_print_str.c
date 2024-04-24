/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alshevch <alshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:18:00 by alshevch          #+#    #+#             */
/*   Updated: 2024/04/24 17:59:58 by alshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_str(char *s, int *length)
{
	int	i;

	i = 0;
	if (s != 0)
	{
		while (s[i] != '\0')
		{
			ft_print_char(s[i], length);
			i++;
		}
	}
	else
		ft_print_str("(null)", length);
}

// int main(void)
// {
//     ft_print_str("Hello, world!");
//     return 0;
// }