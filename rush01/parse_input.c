/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andeviei <andeviei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:35:35 by andeviei          #+#    #+#             */
/*   Updated: 2023/05/21 18:13:57 by andeviei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aux.h"

int	validate_input(char *input)
{
	int	index;

	index = 0;
	while (input[index] != '\0')
	{
		if (index % 2 == 0)
		{
			if (input[index] < '1' || input[index] > '9')
				return (0);
		}
		else
		{
			if (input[index] != ' ')
				return (0);
		}
		index++;
	}
	if ((index + 1) % 8 != 0)
		return (0);
	return ((index + 1) / 8);
}

int	parse_edges(char *input, int **edges)
{
	int	n;
	int	i;

	n = validate_input(input);
	if (n == 0)
		return (0);
	*edges = initialize_array(4 * n);
	i = 0;
	while (i < (4 * n))
	{
		(*edges)[i] = input[2 * i] - '0';
		if ((*edges)[i] > n)
			return (0);
		i++;
	}
	return (n);
}
