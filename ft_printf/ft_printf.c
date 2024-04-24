/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alshevch <alshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:56:24 by alshevch          #+#    #+#             */
/*   Updated: 2024/04/24 18:41:02 by alshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_get_format(va_list *list, char c, int *length)
{
	if (c == 'c')
		ft_print_char(va_arg(*list, int), length);
	else if (c == 's')
		ft_print_str(va_arg(*list, char *), length);
	else if (c == 'p')
		ft_print_pointer(va_arg(*list, size_t), length);
	else if (c == 'i' || c == 'd')
		ft_print_numb(va_arg(*list, int), length);
	else if (c == 'u')
		ft_print_unsgn(va_arg(*list, unsigned int), length);
	else if (c == 'x')
		ft_print_base(va_arg(*list, unsigned int), H_LOW, length);
	else if (c == 'X')
		ft_print_base(va_arg(*list, unsigned int), H_UP, length);
	else if (c == '%')
		ft_print_char('%', length);
	return (1);
}

int	ft_printf(const char *str, ...)
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
			ft_print_char(str[i], &length);
			i++;
		}
	}
	va_end(list);
	return (length);
}

// int	main(void)
// {
// 	int		number = 42;
// 	int		*ptr = NULL;

// 	ft_printf("%x\n", number);
// 	ft_printf("%X\n", number);
// 	ft_printf("%d\n", number);
// 	ft_printf("%i\n", number);
// 	ft_printf("%u\n", number);
// 	ft_printf("%s\n", "");
// 	ft_printf("%c\n", 'd');
// 	ft_printf("%%\n");
// 	ft_printf("%p\n", (void *)ptr);
// 	printf("----\n");
// 	printf("%x\n", number);
// 	printf("%X\n", number);
// 	printf("%d\n", number);
// 	printf("%i\n", number);
// 	printf("%u\n", number);
// 	printf("%s\n", "");
// 	printf("%c\n", 'd');
// 	printf("%%\n");
// 	printf("%p\n", (void *)ptr);
// }