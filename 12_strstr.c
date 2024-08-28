/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   12_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphoonsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:09:43 by tphoonsi          #+#    #+#             */
/*   Updated: 2024/08/24 13:09:56 by tphoonsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str, char *src)
{
	int	i;
	int	j;

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
