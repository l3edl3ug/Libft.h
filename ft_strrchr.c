/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphoonsi <tphoonsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:50:46 by tphoonsi          #+#    #+#             */
/*   Updated: 2024/09/07 17:18:40 by tphoonsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	while (s[i] != (char)c)
	{
		if (i == 0)
			return (0);
		i--;
	}
	return ((char *)&s[i]);
}
/*
ทำงานเหมือน strchr แต่ค้นจากด้านขวาสุดของสตริงไปยังฝั่งซ้ายสุด
	const char *str = "Hello, World!";
    char ch = 'o';
    char *result = ft_strrchr(str, ch);

    printf("Found '%c' is at position %ld.\n", ch, result - str);
    printf("result = %s\n", result);

*/