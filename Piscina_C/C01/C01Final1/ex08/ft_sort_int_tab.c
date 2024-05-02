/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alshevch <alshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 16:00:57 by alshevch          #+#    #+#             */
/*   Updated: 2023/05/30 11:55:55 by alshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	swap;

	while (size >= 0)
	{
			x = 0;
		while (x < size - 1)
		{
			if (tab[x] > tab[x + 1])
			{
			swap = tab[x];
			tab [x] = tab [x + 1];
			tab [x + 1] = swap;
			}
			x++;
		}
		size--;
	}	
}

/* #include <stdio.h>
int	main(void)
{
	int	tab[] = {3, 2, 6, 4, 1, 5};
	int	size;

	size = 6;
	ft_sort_int_tab(tab, size);
	int i = 0;
	while(i < 6)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return (0);
} */
