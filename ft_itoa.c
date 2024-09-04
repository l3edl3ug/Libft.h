/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   14_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphoonsi <tphoonsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:10:25 by tphoonsi          #+#    #+#             */
/*   Updated: 2024/08/28 13:40:04 by tphoonsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	long	num;
	size_t	len;
	size_t	start;

	num = n;
	len = ft_intlen(n) + (num < 0);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
	{
		num = -num;
		str[0] = '-';
	}
	start = 0;
	if (n < 0)
		start = 1;
	while (len > start)
	{
		str[--len] = '0' + (num % 10);
		num = num / 10;
	}
	return (str);
}
