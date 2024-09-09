#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*arrlist;

	arrlist = malloc(sizeof(t_list));
	if (!arrlist)
		return (NULL);
	arrlist->content = content;
	arrlist->next = NULL;
	return (arrlist);
}
/*
เป็นการสร้างnodeใหม่โดยการเริ่มจาก จัดสรรหน่วยความจำให้ใหม่
ถ้าจัดสรรไม่สำเร็จก็จะคืนค่า
arrlist ชี้ไปที่content ก็คือโหนดที่เป็นเนื้อหา
และค่า next ของโหนดใหม่ (arrlist->next) เป็น NULL
หมายความว่าโหนดนี้เป็นโหนดสุดท้ายในลิสต์ในขณะนี้
เพราะยังไม่มีการเชื่อมโยงไปยังโหนดถัดไป
*/