/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   17_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphoonsi <tphoonsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:11:24 by tphoonsi          #+#    #+#             */
/*   Updated: 2024/08/31 15:41:21 by tphoonsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	if (n != 0)
		ft_memset(s, 0, n);
}
/*
#include <stdio.h>

void	ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);

int	main(void)
{
	
}
*/
