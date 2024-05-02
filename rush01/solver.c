/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andeviei <andeviei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 18:12:54 by andeviei          #+#    #+#             */
/*   Updated: 2023/05/21 18:53:09 by andeviei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_row.h"

int	*g_board;
int	*g_edges;
int	g_n;

int	is_value_repeated(int index)
{
	int	i;

	i = 0;
	while (i < g_n)
	{
		if (i != index / g_n
			&& g_board[index] == g_board[i * g_n + index % g_n])
			return (1);
		if (i != index % g_n
			&& g_board[index] == g_board[(index / g_n) * g_n + i])
			return (1);
		i++;
	}
	return (0);
}

int	is_solved(void)
{
	int	index;

	index = 0;
	while (index < 4 * g_n)
	{
		if (g_edges[index] != get_skyline(g_board, g_n, index))
			return (0);
		index++;
	}
	return (1);
}

int	solve_combinations(int index)
{
	if (index < g_n * g_n)
	{
		if (g_board[index] == 0)
		{
			g_board[index] = 1;
			while (g_board[index] <= g_n
				&& (is_value_repeated(index)
					|| solve_combinations(index + 1) == 0))
				g_board[index]++;
			if (g_board[index] <= g_n)
				return (1);
			g_board[index] = 0;
			return (0);
		}
		else
			return (solve_combinations(index + 1));
	}
	else
	{
		return (is_solved());
	}
}

int	solve_puzzle(int *board, int *edges, int n)
{
	int	result;

	g_board = board;
	g_edges = edges;
	g_n = n;
	result = solve_combinations(0);
	if (result == 1)
		return (1);
	else
		return (0);
}
