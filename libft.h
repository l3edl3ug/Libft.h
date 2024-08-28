/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphoonsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:03:11 by tphoonsi          #+#    #+#             */
/*   Updated: 2024/08/28 13:22:39 by tphoonsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>

typedef unsigned char	t_char;
typedef unsigned int	t_int;

size_t	ft_strlen(char *str);
char	*ft_strcpy(char *dest, const char *str);
char	*ft_strncpy(char *dest, const char *str, int n);
int	ft_strcmp(char *s1, char *s2);
int	ft_strncmp(char *s1, char *s2, int n);
char	*ft_strdup(const char *src);
char	*ft_strcat(char *dest, char *str);
char	*ft_ftrncat(char *dest, char *str, int n);
char	*ft_strchr(const char *str, int c);
int	ft_isalpha(int c);
void	ft_putstr(char const *s1, int fd);
char	*ft_strstr(char *str, char *src);
int	ft_atoi(char *str);
char	*ft_itoa(int n);
int	ft_intlen(long n, int len);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void 	*ft_memalloc(size_t size);
int	ft_count(char const *str, char c);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char *c, int fd);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
size_t	strlcpy(char *dst, const char *src, size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
char	*ft_strrchr(const char *s, int c);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(char *str, char *src, size_t len);
char	*ft_strdup(const char *s);
void	*ft_calloc(size_t count, size_t size);


typedef struct	s_list
{
	void	*content;
	size_t	content_size;
	struct s_list	*next;
}	t_list;

#endif
