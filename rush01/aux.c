/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andeviei <andeviei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:54:24 by ciestrad          #+#    #+#             */
/*   Updated: 2023/05/21 17:20:46 by andeviei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*initialize_array(int size)
{
	int	*array;
	int	index;

	array = (int *)malloc(sizeof(int) * size);
	index = 0;
	while (index < size)
	{
		array[index] = 0;
		index++;
	}
	return (array);
}
