/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphoonsi <tphoonsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 12:43:08 by tphoonsi          #+#    #+#             */
/*   Updated: 2024/09/07 15:35:10 by tphoonsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*result;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	end = (int )ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[start]) && start <= end)
		start++;
	if (start > end)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[end]) && end >= start)
		end--;
	result = (char *)malloc(sizeof(char) * (end - start + 2));
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, &s1[start], end - start + 2);
	return (result);
}
/*	start = 0;
	end = (int )ft_strlen(s1) - 1;
กำหนดตำแหน่งเริ่มต้นและสิ้นสุด: start เริ่มต้นที่ 0 
และ end คือความยาวของ s1 ลบด้วย 1 เพื่อชี้ไปที่ตำแหน่งสุดท้ายของสตริง
ลบด้วย 1 เพราะต้องการเอาnullออก และendจะสามารถนำไปใช้ในindexได้

while (ft_strchr(set, s1[start]) && start <= end)
		start++;
ลูปที่ 1: หาตำแหน่งเริ่มต้นที่ไม่อยู่ใน set: ลูปนี้จะเลื่อนค่า start ไปข้างหน้า
จนกว่าจะเจออักขระที่ไม่อยู่ใน set หรือจนกว่า start จะเกิน end

	if (start > end)
		return (ft_strdup(""));
ตรวจสอบกรณีที่ไม่มีตัวอักษรที่ไม่อยู่ใน set: ถ้า start เกิน end 
หมายความว่าไม่มีอักขระที่ไม่อยู่ใน set (สตริงทั้งหมดเป็นอักขระใน set)
ฟังก์ชันจะคืนสตริงว่าง "" logic เดียวกันกับ substr
***logic หลักของลูปนี้จะใช้strchr หาคำและไล่จากstartไปจนถึงตัว
ที่ไม่อยู่ในเงื่อนไขและอีกลูปไล่จากend คือตัวด้านขวามาซ้ายแล้วทำแบบเดียวกัน***
ft_strlcpy(result, &s1[start], end - start + 2);
.
เราได้ทำการจัดสรรพื้นที่ resultโดยใช้malloc
จากนั้นให้เอาs1[ที่มีindexเริ่มต้นหลังจากการหาตัวที่เราไม่เอาเจอแล้ว]
เช่น s1[4]0-3คือตัวที่เราหาเจอ และไม่อยากได้มันเลยเริ่มตึ้นที่4
หลังจากนั้นกำหนดขนาดที่เราอยากได้ ก็คือend - start +2
และให้s1[start]เข้าไปวนลูปในstrlcpy
และเอา resultคืนกลับมาให้เรา
*/