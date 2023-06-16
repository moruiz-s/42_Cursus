# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/19 15:45:39 by moruiz-s          #+#    #+#              #
#    Updated: 2023/06/16 16:53:25 by moruiz-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Nombre de ejecutable
NAME = libftprintf.a

#Nombres de funciones del ejecutable
SRCS =	ft_printf.c\
		ft_printchr.c\
		ft_printstr.c\
		ft_decimal.c\
		ft_decimal_us.c

#Variable para archivos objeto .c y .o
OBJS	= $(SRCS:.c=.o)

#compilador a utilizar
CC = gcc

#variables para flags
CFLAGS	= -Wall -Werror -Wextra -I.

#función principal
all: $(NAME)

#compilar librería
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	
#compilar con los flags
$(OBJS): $(SRCS) 
	$(CC) $(CFLAGS) -c $(SRCS)

#borrar objetos
clean:
	@rm -f $(OBJS) 

#Borrar objetos y ejecutable
fclean: clean
	@rm -f $(NAME)

#Borrar todo
re: fclean all

#No crear archivos con estos nombres
.PHONY: all clean fclean re

