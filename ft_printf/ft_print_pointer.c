/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alshevch <alshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:30:10 by alshevch          #+#    #+#             */
/*   Updated: 2024/04/21 21:00:01 by alshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(size_t num, char c)
{
	int	len;

	len = 0;
	if (c == 'p')
	{
		len += ft_print_char("0x");
		len += ft_print_base(num, H_LOW);
	}
	return (len);
}

int main(void)
{
    size_t address = 0x12345678; // Припустимо, що це адреса
    int length = 0;

    length += ft_print_pointer(address, 'p');
    
    // Виведемо загальну кількість символів, яку відобразив printf
    printf("Total length: %d\n", length);

    return 0;
}