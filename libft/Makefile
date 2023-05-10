# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/19 15:45:39 by moruiz-s          #+#    #+#              #
#    Updated: 2023/05/10 19:00:14 by moruiz-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Nombre de ejecutable
NAME = libft.a

#Nombres de funciones del ejecutable
SRCS =	ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_strlen.c\
		ft_memset.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_strchr.c\
		ft_strrchr.c

#compilador a utilizar
Compiler	= gcc

#Variable para archivos objeto .c y .o
OBJS	= $(SRCS:.c=.o)

#variables para flags
CFLAGS	= -Wall -Werror -Wextra

#función principal
all: $(NAME)

#compilar librería
$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	
#compilar con los flags
$(OBJS): $(SRCS)
	$(Compiler) $(CFLAGS) -c $(SRCS)

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

