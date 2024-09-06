/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   35_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphoonsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:52:32 by tphoonsi          #+#    #+#             */
/*   Updated: 2024/08/28 13:30:54 by tphoonsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	if (s2[0] == '\0')
		return ((char *)s1);
	while (s1[i] && i < n)
	{
		j = 0;
		while ((s1[i + j]) && s2[j] && (s1[i + j] == s2[j]) && i + j < n)
			j++;
		if (s2[j] == '\0')
			return ((char *)s1 + i);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "hello world";
    char src1[] = "world";
    char str2[] = "hello world";
    char src2[] = "foo";
    char str3[] = "hello world";
    char src3[] = "";
    char str4[] = "";
    char src4[] = "hello";

    printf("Test 1: %s\n", ft_strnstr(str1, src1, strlen(str1)) ? "PASS" : "FAIL");
    printf("Expected: world\n");
    printf("Actual: %s\n", ft_strnstr(str1, src1, strlen(str1)));

    printf("\nTest 2: %s\n", ft_strnstr(str2, src2, strlen(str2)) == NULL ? "PASS" : "FAIL");
    printf("Expected: NULL\n");
    printf("Actual: %s\n", ft_strnstr(str2, src2, strlen(str2)));

    printf("\nTest 3: %s\n", ft_strnstr(str3, src3, strlen(str3)) ? "PASS" : "FAIL");
    printf("Expected: hello world\n");
    printf("Actual: %s\n", ft_strnstr(str3, src3, strlen(str3)));

    printf("\nTest 4: %s\n", ft_strnstr(str4, src4, strlen(str4)) == NULL ? "PASS" : "FAIL");
    printf("Expected: NULL\n");
    printf("Actual: %s\n", ft_strnstr(str4, src4, strlen(str4)));

    return 0;
}
*/
