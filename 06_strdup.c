/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphoonsi <tphoonsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:04:53 by tphoonsi          #+#    #+#             */
/*   Updated: 2024/08/28 13:23:41 by tphoonsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	int		len;
	char	*dest;

	len = ft_strlen(src);
	dest = (char *)ft_malloc(len + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i <= len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
