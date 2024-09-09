#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = temp;
	}
	*lst = NULL;
}
/*
temp ถูกใช้เพื่อเก็บ pointer ไปยัง node ถัดไป
ก่อนที่จะปล่อยหน่วยความจำของ node ปัจจุบัน
(*del)((*lst)->content); จะเรียกใช้ฟังก์ชันที่ส่งเข้ามา
เพื่อลบเนื้อหาของ node ปัจจุบัน
free(*lst); จะปล่อยหน่วยความจำของ node ปัจจุบัน
จากนั้น *lst จะถูกตั้งค่าเป็น temp ซึ่งคือ node ถัดไป
เมื่อทำการล้าง list จนหมดแล้ว, *lst จะถูกตั้งค่าเป็น NULL
*/
