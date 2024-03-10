# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmodrzej <dmodrzej@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/10 16:37:47 by dmodrzej          #+#    #+#              #
#    Updated: 2024/03/10 16:39:01 by dmodrzej         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRCS	=	ft_printf.c
					
FLAGS	=	-Wall -Wextra -Werror

OBJS	=	$(SRCS:.c=.o)

%.o: %.c libft.h
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
