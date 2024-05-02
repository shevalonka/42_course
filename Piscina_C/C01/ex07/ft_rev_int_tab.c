/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alshevch <alshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 19:03:36 by alshevch          #+#    #+#             */
/*   Updated: 2023/05/30 11:54:23 by alshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < size / 2)
	{
		swap = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = swap;
		i++;
	}
}

/* #include <stdio.h>
int	main(void)
{
	int	tab[] = {0, 1, 2, 3, 4, 5};
	int	size;
	size = 6;
	ft_rev_int_tab(tab, size);
	int i = 0;
	while(i < 6)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return (0);
} */
