/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alshevch <alshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 18:16:30 by alshevch          #+#    #+#             */
/*   Updated: 2023/05/30 11:49:04 by alshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

/* int	main(void)
{
	char	str[] = "Halo";
	ft_putstr(str);
	return (0);
}  */
