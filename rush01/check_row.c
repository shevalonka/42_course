/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_row.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andeviei <andeviei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 16:47:02 by andeviei          #+#    #+#             */
/*   Updated: 2023/05/21 17:21:34 by andeviei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_column_skyline(int *board, int n, int column)
{
	int	row;
	int	max;
	int	result;

	max = 0;
	result = 0;
	row = 0;
	while (row < n)
	{
		if (board[row * n + column] > max)
		{
			max = board[row * n + column];
			result++;
		}
		row++;
	}
	return (result);
}

int	get_column_skyline_reverse(int *board, int n, int column)
{
	int	row;
	int	max;
	int	result;

	max = 0;
	result = 0;
	row = n - 1;
	while (row >= 0)
	{
		if (board[row * n + column] > max)
		{
			max = board[row * n + column];
			result++;
		}
		row--;
	}
	return (result);
}

int	get_row_skyline(int *board, int n, int row)
{
	int	column;
	int	max;
	int	result;

	max = 0;
	result = 0;
	column = 0;
	while (column < n)
	{
		if (board[row * n + column] > max)
		{
			max = board[row * n + column];
			result++;
		}
		column++;
	}
	return (result);
}

int	get_row_skyline_reverse(int *board, int n, int row)
{
	int	column;
	int	max;
	int	result;

	max = 0;
	result = 0;
	column = n - 1;
	while (column >= 0)
	{
		if (board[row * n + column] > max)
		{
			max = board[row * n + column];
			result++;
		}
		column--;
	}
	return (result);
}

int	get_skyline(int *board, int n, int index)
{
	if (index / n == 0)
		return (get_column_skyline(board, n, index % n));
	else if (index / n == 1)
		return (get_column_skyline_reverse(board, n, index % n));
	else if (index / n == 2)
		return (get_row_skyline(board, n, index % n));
	else if (index / n == 3)
		return (get_row_skyline_reverse(board, n, index % n));
	return (0);
}
