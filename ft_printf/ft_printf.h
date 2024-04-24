/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alshevch <alshevch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:47:04 by alshevch          #+#    #+#             */
/*   Updated: 2024/04/24 18:21:38 by alshevch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

# define H_UP	"0123456789ABCDEF"
# define H_LOW	"0123456789abcdef"

int		ft_printf(const char *str, ...);
void	ft_print_numb(int c, int *length);
void	ft_print_char(char c, int *length);
void	ft_print_base(size_t c, char *base, int *length);
void	ft_print_pointer(size_t num, int *length);
void	ft_print_str(char *s, int *length);
void	ft_print_unsgn(unsigned int c, int *length);

#endif