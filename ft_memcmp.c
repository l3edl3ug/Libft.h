/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   34_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphoonsi <tphoonsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 13:20:33 by tphoonsi          #+#    #+#             */
/*   Updated: 2024/08/28 13:41:19 by tphoonsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	i = 0;
	while (i < n && p1[i] == p2[i])
	{
		i++;
	}
	if (i == n)
		return (0);
	return (p1[i] - p2[i]);
}
/*
#include <stdio.h>
int main(void)
{
	char str1[] = "hello";
	char str2[] = "hello";
	char str3[] = "hellx";
	printf("Comparing %s and %s: %d\n", str1, str2, ft_memcmp(str1, str2, 5));
	printf("system test = %d\n",memcmp(str1,str2,5));
	printf("Comparing %s and %s: %d\n", str1, str3, ft_memcmp(str1, str3, 5));
	printf("system test = %d\n",memcmp(str1,str3,5));
	return 0;
}
*/
