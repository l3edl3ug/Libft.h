/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   32_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphoonsi <tphoonsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:50:46 by tphoonsi          #+#    #+#             */
/*   Updated: 2024/08/28 13:27:28 by tphoonsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
/*
#include <stddef.h>
#include <stdio.h>
int main()
{
    const char str[] = "Hello, world!";
    char c = 'o';
    char *result;

    result = ft_strrchr(str, c);

    if (result != NULL)
        printf("Last occurrence of character '%c' is at position: %ld\n", c, result - str);
    else
        printf("Character '%c' not found.\n", c);

    return 0;
}
*/
