#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
lst ชี้ไปที่ nextเพื่อเลื่อนตัวnodeถัดๆไปจนถึงNULL
และ return ตัวnodeสุดท้ายที่nextเลื่อนไปถึงออกมา
*/