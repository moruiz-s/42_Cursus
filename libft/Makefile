# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/19 15:45:39 by moruiz-s          #+#    #+#              #
#    Updated: 2023/06/01 15:47:46 by moruiz-s         ###   ########.fr        #
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
		ft_strrchr.c\
		ft_strncmp.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_strnstr.c\
		ft_atoi.c\
		ft_calloc.c\
		ft_strdup.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_itoa.c\
		ft_strmapi.c\
		ft_striteri.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_split.c

#Variable para archivos objeto .c y .o
OBJS	= $(SRCS:.c=.o)

#Nombres de funciones del bonus
BONUS	=	ft_lstnew_bonus.c\
			ft_lstadd_front_bonus.c\
			ft_lstsize_bonus.c\
			ft_lstlast_bonus.c\
			ft_lstadd_back_bonus.c\
			ft_lstdelone_bonus.c\
			ft_lstclear_bonus.c\
			ft_lstiter_bonus.c\
			ft_lstmap_bonus.c

BONUS_OBJS = $(BONUS:.c=.o)

#compilador a utilizar
Compiler	= gcc

#variables para flags
CFLAGS	= -Wall -Werror -Wextra -I.

#función principal
all: $(NAME)

#compilar librería
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	
#compilar con los flags
$(OBJS): $(SRCS) 
	$(Compiler) $(CFLAGS) -c $(SRCS)

#borrar objetos
clean:
	@rm -f $(OBJS) $(BONUS_OBJS)

#Borrar objetos y ejecutable
fclean: clean
	@rm -f $(NAME)

#Borrar todo
re: fclean all

bonus:	$(OBJS) $(BONUS_OBJS)
		ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

#No crear archivos con estos nombres
.PHONY: all clean fclean re bonus

