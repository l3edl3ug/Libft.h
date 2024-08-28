/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   17_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphoonsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:11:24 by tphoonsi          #+#    #+#             */
/*   Updated: 2024/08/24 13:11:36 by tphoonsi         ###   ########.fr       */
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

int main(void)
{
    char array[10] = "HelloWorld"; // อาร์เรย์ขนาด 10 ไบต์ที่มีค่า "HelloWorld"

    ft_bzero(array, 5); // ล้าง 5 ไบต์แรกของอาร์เรย์ให้เป็นศูนย์

    // แสดงผลลัพธ์
    printf("Array after bzero: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", array[i]); // แสดงค่าของแต่ละไบต์ในรูปของตัวเลข
    }
    printf("\n");

    return 0;
}
*/
