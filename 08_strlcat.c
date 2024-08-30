/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphoonsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:06:29 by tphoonsi          #+#    #+#             */
/*   Updated: 2024/08/24 13:06:43 by tphoonsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest,const char *str, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;
	size_t	str_len;

	j = 0;
	dest_len = ft_strlen(dest);
	str_len = ft_strlen(str);
	if (size <= str_len)
		return (str_len);
	i = dest_len;
	while (str[j] && i < size - 1)
	{
		dest[i] = str[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest_len + str_len);
}
