/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   16_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphoonsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:11:03 by tphoonsi          #+#    #+#             */
/*   Updated: 2024/08/24 13:11:17 by tphoonsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t i;

	i = 0;
	while (i < len)
	{
		((unsigned char*)b)[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/*
int main(void)
{
    char array[10]; // สร้างอาร์เรย์ขนาด 10 ไบต์

    // ใช้ ft_memset เพื่อกำหนดค่า 'A' ให้กับทุกไบต์ใน array
    ft_memset(array, 'A', sizeof(array));

    // แสดงผลลัพธ์เพื่อดูการเปลี่ยนแปลง
    printf("Array after memset: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%c ", array[i]);
    }
    printf("\n");

    return 0;
}
*/
