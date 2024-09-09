/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphoonsi <tphoonsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 12:43:16 by tphoonsi          #+#    #+#             */
/*   Updated: 2024/09/07 14:01:16 by tphoonsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	if ((ft_strlen(s) - start) < len)
		len = ft_strlen(s) - start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (i < len && s[start + i])
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char const *s รับค่า string array
unsigned int start รับตัวเลขที่อยากกำหนดว่าจะเริ่มเอาตัวอักษรindexตัวที่เท่าไหร่
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
-เงื่อไขนี้สำหรับที่ ถ้าstartที่เราระบุในparameterไม่อยู่ในindexของ
 *s ให้สร้างค่าว่าง เพราะมันหาไม่เจอ
-----------------------------------------------
-size_t len จำนวนขนาดของstring ที่อยากได้กี่ตัว
ถ้าขนาดของ array string ลบกับ start แล้วน้อยกว่าขนาด len
บังคับให้ len เก็บค่า string array ลบกับ start เข้าไป
เพื่อกำหนดค่าlenให้พอดีกับ string ที่เราอยากได้
ลูปwhile หลักถ้า index น้อยกว่า len ที่ถูกกำหนดขนาดแล้ว
และ stringที่มีอินเด็กstart และ i รวมกัน ไม่เท่ากับ NULL
ให้ ตัวแปรstr[i] เก็บค่า s เริ่มต้นindexที่ [start + i]
ยกตัวอย่าง:
str[] = Hello, World! มีขนาด 14;
และเราใช้ ft_substr(str, 3 , 20)
----------------------------
ก็จะเป็น str[0] = s[3 + 0] > l
str[1] = s[3 + 1] > o
str[2] = s[3 + 2] > ,
... ไปเรื่อยๆจนถึงnull ของs
----------------------------
คำที่จะได้
lo, World! นั่นก็คือขนาด 11
*/

/*
#include <stdio.h> 

char *ft_substr(char const *s, unsigned int start, size_t len);

int main(void)
{
    char s[] = "Hello, World!";
    char *substring;

    // ใช้ ft_substr โดยเริ่มต้นที่ตำแหน่ง 0 และขอความยาว 30
    substring = ft_substr(s, 0, 30);

    printf("Original string: '%s'\n", s);
    printf("Substring: '%s'\n", substring);

    free(substring);

    return 0;
}
*/
