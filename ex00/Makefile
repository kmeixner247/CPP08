# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/09 10:09:08 by kmeixner          #+#    #+#              #
#    Updated: 2022/07/06 12:02:23 by kmeixner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	easyfind

SRCS		=	main.cpp

CC			=	c++

RM			=	rm

CFLAGS		=	-Wall -Werror -Wextra -std=c++98

all:		$(NAME)

$(NAME):	$(SRCS)
			$(CC) $(CFLAGS) -o $(NAME) $(SRCS)

clean:		
			$(RM) -f $(NAME)

fclean:		clean

re:			fclean all

.PHONY:		all clean fclean re
