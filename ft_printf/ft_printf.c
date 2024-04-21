/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alshevch <alshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:56:24 by alshevch          #+#    #+#             */
/*   Updated: 2024/04/21 20:55:11 by alshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_get_format(va_list *list, char c, int *length)
{
	if (c == '%')
		ft_print_char('%');
	else if (c == 'c')
		ft_print_char(va_arg(*list, int));
	else if (c == 's')
		ft_print_str(va_arg(*list, char *));
	else if (c == 'p')
		ft_print_pointer(va_arg(*list, size_t), *length);
	else if (c == 'i' || c == 'd')
		ft_print_numb(va_arg(*list, int), length);
	else if (c == 'u')
		ft_print_unsgn(va_arg(*list, unsigned int), length);
	else if (c == 'x')
		ft_print_base(va_arg(*list, unsigned int), H_LOW, length);
	else if (c == 'X')
		ft_print_base(va_arg(*list, unsigned int), H_UP, length);
	return (*length);
}

int	ft_print(const char *str, ...)
{
	va_list	list;
	int		length;
	int		i;

	if (!str)
		return (0);
	length = 0;
	va_start(list, str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			ft_get_format(&list, str[++i], &length);
			i++;
		}
		else
		{
			ft_print_char(str[i]);
			i++;
		}
	}
	va_end(list);
	return (length);
}

int	main(void)
{
	int		number = 42;
	int		*ptr = NULL;

	ft_print("%x\n", number);
	ft_print("%X estas\n", number);
	ft_print("%d\n", number);
	ft_print("%i", number);
	ft_print("%u", number);
	ft_print("%s\n", "");
	ft_print("%c\n", 'd');
	ft_print("%%\n");
	ft_print("%p\n", (void *)ptr);
	// printf("----\n");
	// printf("%x\n", number);
	// printf("%X\n", number);
	// printf("%d\n", number);
	// prinftf("%i\n", number);
	// printf("%u\n", number);
	// printf("%s\n", "");
	// printf("%c\n", 'd');
	// printf("%%\n");
	// printf("%p\n", (void *)ptr);
}