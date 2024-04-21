/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alshevch <alshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:18:00 by alshevch          #+#    #+#             */
/*   Updated: 2024/04/21 19:30:08 by alshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_str(char *s)
{
	int	i;

	i = 0;
	if (s != 0)
	{
		while (s[i] != '\0')
		{
			ft_print_char(s[i]);
			i++;
		}
	}
	else
		ft_print_str("(null)");
}

// int main(void)
// {
//     ft_print_str("Hello, world!");
//     return 0;
// }