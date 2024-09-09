/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphoonsi <tphoonsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:40:31 by tphoonsi          #+#    #+#             */
/*   Updated: 2024/09/07 14:49:37 by tphoonsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char toupper_wrapper(unsigned int index, char c) {
    return (char)ft_toupper((int)c);
}
int	main(void)
{
/*
    printf("result = %d\n",ft_atoi("123"));

    const char haystack[] = "Hello, this is a simple test.";
	const char needle[] = "this";
	char	*result0;

	result0 = ft_strnstr(haystack, needle, 30);
	printf("Found '%s' in '%s' -> '%s'\n", needle, haystack, result0);

    char **result;
    int i;
    // ทดสอบ ft_split
    result = ft_split("Hello, world! This is a test.", ' ');
    
    if (result == NULL)
    {
        printf("Memory allocation failed.\n");
        return (1);
    }

    // แสดงผลลัพธ์และตรวจสอบ memory leaks
    i = 0;
    while (result[i] != NULL)
    {
        printf("result[%d]: %s\n", i, result[i]);
        free(result[i]);
        i++;
    }
    free(result);  // free array ที่จัดสรรหน่วยความจำไว้สำหรับ result
	//fuction_is family
    printf("toupper %s\n", ft_strmapi("hello",toupper_wrapper));
    char str[] = "Hello, World!";
    ft_memmove(str + 7, str, 5);
    printf("%s\n",str);
    */
    const char *str = "Hello, World!";
    char ch = 'o';
    char *result = ft_strrchr(str, ch);

    printf("The last occurrence of '%c' is at position %ld.\n", ch, result - str);
    printf("The substring from the last occurrence is: %s\n", result);


/*
	//strrchr
    const char str[] = "Hello, world!";
    char c = 'o';
    char *res;

    res = ft_strrchr(str, c);

    if (result != NULL)
        printf("Last occurrence of character '%c' is at position: %ld\n", c, res - str);
    else
        printf("Character '%c' not found.\n", c);
	
	//strnstr
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
	
	char dest1[20];
	char src[] = "hello, world!";
	ft_memmove(dest1,src,13);
	printf("Test 1 > %s\n",dest1);
	//ทดสอบ src และ dest1 ทับซ้อนกัน (from back to front)
	char overlap1[20] = "abcdef";
	ft_memmove(overlap1 + 2,overlap1,4);
	printf("test 2 > %s\n",overlap1);
	//ทดสอบ src และ dest1 ทับซ้อนกัน(from front to back)
	char overlap2[20] = "abcdef";
	char dest2[20];
	ft_memmove(dest2,overlap2 + 2, 4);
	printf("Test 3 > %s\n",overlap2);
*/
    return 0;
}