#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
}

/*
การทำงานของฟังก์ชัน
ตรวจสอบพารามิเตอร์:
ถ้าหาก lst หรือ new เป็น NULL ฟังก์ชันจะคืนค่า return ทันที.

ตรวจสอบว่าลิสต์ว่างหรือไม่:
ถ้าหาก *lst เป็น NULL หมายความว่าลิสต์นั้นว่างอยู่
ดังนั้นจะทำให้ *lst ชี้ไปที่ node ใหม่ทันที.

เดินลูปหา node สุดท้าย:
ใช้ตัวแปร last เพื่อเดินทางไปยัง node สุดท้ายของลิสต์
(โดยวนลูปจนกว่า last->next จะเป็น NULL).

เพิ่ม node ใหม่ต่อท้ายลิสต์: ทำให้ node สุดท้าย (last) ชี้ไปที่ node ใหม่ (new).

ทำงานยังไง?
ฟังก์ชันนี้จะใช้ในการเพิ่ม node ใหม่ต่อท้ายลิสต์ที่มีอยู่แล้ว 
เช่นถ้าเรามีลิสต์ที่ประกอบไปด้วย node หลายตัว 
ฟังก์ชันนี้จะเพิ่ม node ใหม่ให้เป็น node สุดท้ายของลิสต์.
*/
