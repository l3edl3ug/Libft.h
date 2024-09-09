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
CFLAGS = -Wall -Werror -Wextra

NAME =	libft.a
SRCS =	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
    	ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strlen.c \
    	ft_strlcpy.c ft_strncmp.c ft_strdup.c ft_strlcat.c ft_strchr.c \
    	ft_strrchr.c ft_strnstr.c ft_substr.c ft_strjoin.c ft_strtrim.c \
    	ft_split.c ft_memset.c ft_memcpy.c ft_memmove.c ft_memchr.c \
    	ft_memcmp.c ft_putstr_fd.c ft_putnbr_fd.c ft_putchar_fd.c \
    	ft_itoa.c ft_striteri.c ft_strmapi.c ft_putendl_fd.c
SRCSB =	ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
		ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c ft_lstiter_bonus.c

OBJS = ${SRCS:.c=.o}
OBJSB = ${SRCSB:.c=.o}

all: ${NAME}

%.o: %.c libft.h Makefile
	${CC} ${CFLAGS} -c $< -o $@

bonus: ${NAME} ${OBJSB}
	ar rcs ${NAME} ${OBJS} ${OBJSB}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

clean:
	rm -f ${OBJS} ${OBJSB}
fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
