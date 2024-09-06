/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   36_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphoonsi <tphoonsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:53:17 by tphoonsi          #+#    #+#             */
/*   Updated: 2024/08/28 13:21:49 by tphoonsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	char	*result;

	dest = (char *)malloc(ft_strlen(s) + 1);
	if (dest == NULL)
		return (NULL);
	result = dest;
	while (*s)
	{
		*result = *s;
		s++;
		result++;
	}
	*result = '\0';
	return (dest);
}
