/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   14_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphoonsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:10:25 by tphoonsi          #+#    #+#             */
/*   Updated: 2024/08/24 13:10:29 by tphoonsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int	len;
	int	sign;
	int	temp_n;

	sign = (n < 0) ? -1 : 1; //check minus symbol number
	len = (n <= 0) ? 1 : 0; //check lenght of string
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
