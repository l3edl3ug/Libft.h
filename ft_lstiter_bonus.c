/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphoonsi <tphoonsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:21:39 by tphoonsi          #+#    #+#             */
/*   Updated: 2024/09/10 12:21:39 by tphoonsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
ฟังก์ชัน ft_lstiter ทำหน้าที่เป็นฟังก์ชันที่วนลูปผ่านลิสต์ที่เชื่อมโยง
และเรียกใช้ฟังก์ชันอื่นที่ถูกส่งเข้ามาในแต่ละโหนด

void print_content(void *content) 
{
    printf("%s\n", (char *)content);
}

int main() 
{
    t_list *list = ft_lstnew("Hello");
    list->next = ft_lstnew("World");
    list->next->next = ft_lstnew("!");

    ft_lstiter(list, print_content);

    // Output:
    // Hello
    // World
    // !
    return 0;
}

list คือ node 1
list -> next คือ node 2
list -> next -> next คือ node 3
*/