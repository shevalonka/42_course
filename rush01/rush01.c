/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andeviei <andeviei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:35:19 by ciestrad          #+#    #+#             */
/*   Updated: 2023/05/21 17:34:34 by andeviei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "aux.h"
#include "parse_input.h"
#include "print_output.h"
#include "solver.h"

int	main(int argc, char **argv)
{
	int	*edges;
	int	*board;
	int	n;
	int	result;

	if (argc != 2)
	{
		print_error();
		return (0);
	}
	n = parse_edges(argv[1], &edges);
	if (n == 0)
	{
		print_error();
		return (0);
	}
	board = initialize_array(n * n);
	result = solve_puzzle(board, edges, n);
	if (result == 1)
		print_results(board, n);
	else
		print_error();
	return (0);
}
