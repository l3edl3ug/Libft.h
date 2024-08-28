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
	size_t	len;
	size_t	sign;
	size_t	temp_n;

	sign = 1;
	if (n < 0)
		sign = -1;
	len = 0;
	if (n <= 0)
		len = 1;
	temp_n = n;
	while (temp_n != 0)
	{
		temp_n = temp_n / 10;
		len++;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (len > 0)
	{
		str[len] = '0' + (n % 10) * sign;
		n = n / 10;
		len--;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}
