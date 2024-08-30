/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphoonsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:40:31 by tphoonsi          #+#    #+#             */
/*   Updated: 2024/08/24 14:11:51 by tphoonsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int	main(void)
{
	/*
	char	s[] = "hello ,world!";
	char	s2[] = "";
	//ft_putstr_fd(s,1);
	//char *substring;
	char	*test;
    // ใช้ ft_substr โดยเริ่มต้นที่ตำแหน่ง 0 และขอความยาว 30
    //substring = ft_substr(s, 7, 30);
	//test = ft_strjoin(s,s2);
    printf("Original string: '%s'\n", s);
    //printf("Substring: '%s'\n", substring);
	//printf("ft_strjoin = %s\n",test);
	printf("%s\n", ft_itoa(123));
    printf("%s\n", ft_itoa(-123));
	printf("%s\n", ft_itoa(0));
    printf("%s\n", ft_itoa(-2147483648));
	
	size_t size = 8;
    char dest[20] = "Hello";
    const char *src = "World";
    //size_t result = ft_strlcat(dest, src, size);
	char s1[] = "   Hello,World!   ";
    char set[] = " ";
    char c = ','
    char **result;
    */
/*
    char *trimmed = ft_strtrim(s1, set);

    if (trimmed != NULL)
    {
        printf("Trimmed string: '%s'\n", trimmed);
        free(trimmed);
    }
    else
    {
        printf("Error: Memory allocation failed or NULL input.\n");
    }
*/
    char *s1 = "hello,world,foo,bar";
    char c = ',';
    char **result;  // Declare result as a pointer to a pointer to char
    char *s2 = "hello";  // Add this line to declare s2

    result = ft_split(s1, c);  // Assign the result of ft_split to result

    if (result == NULL)
        return 1; // error

    int i = 0;
    while (result[i] != NULL)
    {
        printf("Substring %d: %s\n", i, result[i]);
        i++;
    }

    // Don't forget to free the allocated memory!
    for (i = 0; result[i] != NULL; i++)
        free(result[i]);
    free(result);

    return 0;

    //printf("Resulting string: %s\n", dest);
    //printf("Resulting length: %zu\n", result);
    //free(test);

	return (0);
}
