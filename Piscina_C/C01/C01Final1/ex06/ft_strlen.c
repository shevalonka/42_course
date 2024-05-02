/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alshevch <alshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 18:53:33 by alshevch          #+#    #+#             */
/*   Updated: 2023/05/30 11:49:11 by alshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*  #include <stdio.h>

int	main(void)
{
	int	pum;
	char	str[] = "0123456789";

	pum = ft_strlen(str);
	printf("%s\n", str);
	printf("%d\n", pum);
	return (0);
} 
 */