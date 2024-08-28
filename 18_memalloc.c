/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   18_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphoonsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:08:32 by tphoonsi          #+#    #+#             */
/*   Updated: 2024/08/24 13:08:43 by tphoonsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*res;

	res = malloc(size);
	if (res == NULL)
		return (NULL);
	ft_bzero(res, size);
	return (res);
}
/*
int main(void)
{
    int *arr;

    arr = (int *)ft_memalloc(5 * sizeof(int)); // จัดสรรอาร์เรย์ขนาด 5 ตัวแปรชนิด int และล้างเป็นศูนย์
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return (1);
    }

    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]); // ค่าทั้งหมดจะเป็น 0 เนื่องจาก ft_memalloc ได้ล้างหน่วยความจำให้เป็นศูนย์แล้ว
    printf("\n");

    free(arr); // อย่าลืมคืนหน่วยความจำที่จัดสรร
    return (0);
}
*/
