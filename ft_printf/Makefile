# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alshevch <alshevch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/16 17:36:02 by alshevch          #+#    #+#              #
#    Updated: 2024/04/16 17:41:26 by alshevch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c \
		ft_print_char.c \
		ft_print_numb.c \
		ft_print_pointer.c \
		ft_print_str.c \
		ft_print_base.c \
		ft_print_unsgn.c \

OBJS = $(SRCS:.c=.o)

CFLAGS = -c -Wall -Wextra -Werror

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	gcc $(CFLAGS) $(SRCS) -I./

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re