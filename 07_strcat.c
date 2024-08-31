/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphoonsi <tphoonsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:05:51 by tphoonsi          #+#    #+#             */
/*   Updated: 2024/08/31 15:47:57 by tphoonsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, char *str)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (str == NULL)
		return (dest);
	while (dest[i])
		i++;
	while (str[j])
	{
		dest[i + j] = str[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
