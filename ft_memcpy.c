/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   30_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphoonsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:48:10 by tphoonsi          #+#    #+#             */
/*   Updated: 2024/08/28 12:48:30 by tphoonsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*dst;
	const char	*s;

	dst = (char *)dest;
	s = (const char *)src;
	i = 0;
	while (i < n)
	{
		dst[i] = s[i];
		i++;
	}
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char src[] = "hello";
	char dest1[6];
	char dest2[6];
	
	ft_memcpy(dest1,src,6);
	memcpy(dest2,src,6);
	printf("mine > %s\n",dest1);
	printf("string.h > %s\n",dest2);
}
*/
