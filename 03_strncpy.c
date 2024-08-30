/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphoonsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:00:14 by tphoonsi          #+#    #+#             */
/*   Updated: 2024/08/24 13:00:27 by tphoonsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	*ft_strlcpy(char *dst, const char *str, size_t size)
{
	int	i;

	i = 0;
	while (str[i] && i < size)
	{
		dst[i] = str[i];
		i++;
	}
	while (i < size)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
