/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   09_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphoonsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:08:50 by tphoonsi          #+#    #+#             */
/*   Updated: 2024/08/24 13:09:01 by tphoonsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return (char *)&str[i];
		i++;
	}
	if (c == '\0')
		return (char *)&str[i];
	return (NULL);
}
