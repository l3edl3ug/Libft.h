/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphoonsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:03:11 by tphoonsi          #+#    #+#             */
/*   Updated: 2024/08/24 14:13:21 by tphoonsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <unistd.h>

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
void	ft_putchar(char c);

typedef struct	s_list
{
	void	*content;
	size_t	content_size;
	struct s_list	*next;
}	t_list;

#endif
