/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   12_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphoonsi <tphoonsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:09:43 by tphoonsi          #+#    #+#             */
/*   Updated: 2024/08/31 15:47:00 by tphoonsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str, char *src)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (src[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] && str[i + j] == src[j])
		{
			j++;
			if (src[j])
				return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
