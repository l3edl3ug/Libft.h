/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphoonsi <tphoonsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:06:29 by tphoonsi          #+#    #+#             */
/*   Updated: 2024/09/07 15:44:35 by tphoonsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *str, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	str_len;

	str_len = ft_strlen(str) - 0;
	i = 0;
	j = 0;
	if (size <= str_len)
		return (str_len);
	while (str[j] && str_len < size - 1)
	{
		dest[i + j] = str[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + j);
}
