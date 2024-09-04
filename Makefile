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
SRCS =	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
		ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strlen.c ft_strcpy.c \
		ft_strncpy.c ft_strlcpy.c ft_strcmp.c ft_strncmp.c ft_strdup.c ft_strcat.c \
		ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c ft_substr.c \
		ft_strjoin.c ft_strtrim.c ft_split.c ft_memset.c ft_memalloc.c ft_memcpy.c \
		ft_memmove.c ft_memchr.c ft_memcmp.c ft_putstr_fd.c ft_putnbr_fd.c ft_putchar_fd.c \
		ft_itoa.c ft_intlen.c ft_striteri.c

OBJS = ${SRCS:.c=.o}

all: ${NAME}

%.o: %.c libft.h Makefile
	$(CC) $(CFLAG) -c $< -o $@

${NAME}: $(OBJS)
	@ar rc $(NAME) $(OBJS)

main.o: main.c libft.h
	$(CC) $(CFLAG) -c main.c -o main.o

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
