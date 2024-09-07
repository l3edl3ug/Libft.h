/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphoonsi <tphoonsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:48:47 by tphoonsi          #+#    #+#             */
/*   Updated: 2024/09/07 16:29:58 by tphoonsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*s;
	size_t		len;

	if (!dst || !s)
		return (0);
	dst = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (dst < s)
	{
		while (n >= 0)
		{
			n--;
			dst[n] = s[n];
		}
	}
	else
		ft_memcpy(dst, s, n);
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char dest1[20];
	char src[] = "hello, world!";
	ft_memmove(dest1,src,13);
	printf("Test 1 > %s\n",dest1);
	//ทดสอบ src และ dest1 ทับซ้อนกัน (from back to front)
	char overlap1[20] = "abcdef";
	ft_memmove(overlap1 + 2,overlap1,4);
	printf("test 2 > %s\n",overlap1);
	//ทดสอบ src และ dest1 ทับซ้อนกัน(from front to back)
	char overlap2[20] = "abcdef";
	char dest2[20];
	ft_memmove(dest2,overlap2 + 2, 4);
	printf("Test 3 > %s\n",overlap2);
}
*/
