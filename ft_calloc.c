/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphoonsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:53:26 by tphoonsi          #+#    #+#             */
/*   Updated: 2024/09/10 15:06:58 by tphoonsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	lenght;
	void	*ptr;

	lenght = size * count;
	if (count == 0 || size == 0)
		return (malloc(0));
	else if ((long)count < 0 || (long)size < 0)
		return (NULL);
	ptr = (void *)malloc(lenght);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, lenght);
	return (ptr);
}
