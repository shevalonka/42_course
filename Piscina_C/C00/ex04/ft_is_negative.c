/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alshevch <alshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:01:11 by alshevch          #+#    #+#             */
/*   Updated: 2023/05/20 20:22:39 by alshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	b;

	if (n >= 0)
	{
		b = 'P';
	}
	else
	{
		b = 'N';
	}
	write(1, &b, 1);
}

int	main(void)
{
	ft_is_negative(17);
	ft_is_negative(-1);
}
