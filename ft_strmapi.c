/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphoonsi <tphoonsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 12:42:58 by tphoonsi          #+#    #+#             */
/*   Updated: 2024/09/07 14:48:03 by tphoonsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s || !f)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
string map with index
ft_strmapi คือฟังก์ชันที่ทำหน้าที่วนลูปและเรียกใช้ฟังก์ชันอื่นๆ (f)
กับแต่ละตัวอักษรในสตริงเพื่อนำผลลัพธ์มาเก็บในสตริงใหม่
โดยจะจัดสรรพื้นที่ไว้ให้เพียงพอและเก็บสตริงพารามีเตอร์เข้าไป
char (*f)(unsigned int, char): นี่คือการกำหนดว่าพารามิเตอร์ f ที่ส่งเข้ามานั้น
ต้องเป็นฟังก์ชันที่มีพารามิเตอร์ 2 ตัว:

unsigned int: คือดัชนี (index) ของตัวอักษรในสตริง (นับจาก 0 เป็นต้นไป)
char: คือตัวอักษรที่ถูกแปลงโดยฟังก์ชันนั้น
ฟังก์ชันนี้จะ คืนค่า (return) เป็นตัวอักษรแบบ char.

// ฟังก์ชันที่ใช้ในการแปลงตัวอักษร

char toupper_wrapper(unsigned int index, char c)
{
    return ft_toupper(c);
}

int main(void) 
{
    char str[] = "hello world";
    char *result = ft_strmapi(str, toupper_wrapper);

    printf("Transformed string: %s\n", result);
    free(result);  // อย่าลืมฟรีหน่วยความจำที่จัดสรร

    return 0;
}
*/