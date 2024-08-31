# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tphoonsi <tphoonsi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/31 15:55:57 by tphoonsi          #+#    #+#              #
#    Updated: 2024/08/31 17:42:11 by tphoonsi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra -I

NAME = libft.a
SRCS = 

OBJS = ${SRCS:.c=.o}

all: ${NAME}

%.o: %.c libft.h Makefile
	$(CC) $(CFLAG) -c $< -o $@

${NAME}: $(OBJ)
	@ar rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)
fclean = clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
