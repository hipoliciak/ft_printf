# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmodrzej <dmodrzej@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/10 16:37:47 by dmodrzej          #+#    #+#              #
#    Updated: 2024/03/11 19:24:07 by dmodrzej         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRCS	=	ft_printf.c ft_putcharstr.c ft_putnbr.c ft_putpointer.c \
			ft_putunsigned.c ft_putnbrhex.c ft_putstr.c
					
FLAGS	=	-Wall -Wextra -Werror

OBJS	=	$(SRCS:.c=.o)

%.o: %.c ft_printf.h
	cc $(FLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
			ar -rcs $(NAME) $(OBJS)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
