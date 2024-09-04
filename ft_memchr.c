/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   33_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphoonsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:51:13 by tphoonsi          #+#    #+#             */
/*   Updated: 2024/08/28 13:43:00 by tphoonsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	ch;
	unsigned char	*str;
	size_t	i;

	str = (unsigned char *)s;
	ch = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == ch)
			return (str + i);
		i++;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stddef.h>
#include <stdio.h>
int	main(void)
{
	const void *s = "ABFDEF";
	int	c = 70;
	size_t n = 6;
	char *result;
	
	result = ft_memchr(s,c,n);
	printf("Result = %ld\n",(unsigned char *)result - (unsigned char *)s);
	return (0);
}
*/
