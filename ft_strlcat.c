/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphoonsi <tphoonsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:06:29 by tphoonsi          #+#    #+#             */
/*   Updated: 2024/09/07 15:44:35 by tphoonsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *str, size_t size)
{
	size_t	i;
	size_t	str_len;
	size_t	dest_len;

	dest_len = ft_strlen(dest);
	str_len = ft_strlen(str);
	i = 0;
	if (size <= dest_len)
		return (str_len + size);
	while (str[i] && (dest_len + i < size - 1))
	{
		dest[dest_len + i] = str[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + str_len);
}
/*
ฟังก์ชั่นนี้จะสามารถทำหน้าที่ได้ 2 แบบ:
1.คือเราต้องการอยากดูความยาวสตริงผลรวมทั้ง destและstr
2.คือเราอยากรู้ว่า dest หลังจากเรากำหนดsizeไปแล้วมันจะมาต่อกันยังไง
ยกตัวอย่าง:
	char dest[4] = "he";
    const char *str = "llo, world!";
    size_t size = 4;

    size_t result = ft_strlcat(dest, str, size);

    printf("Result: %zu\n", result);
    printf("Dest: %s\n", dest);
	
	%zu เป็นตัวแสดงรูปแบบที่เหมาะสำหรับ size_t ในการพิมพ์ค่า.
*/
