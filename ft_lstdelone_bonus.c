/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphoonsi <tphoonsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:21:36 by tphoonsi          #+#    #+#             */
/*   Updated: 2024/09/10 12:21:36 by tphoonsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (del == NULL)
		return ;
	if (lst)
	{
		(*del)(lst->content);
		free(lst);
	}
}
/*
ถ้า del ไม่มีก็คืนค่าว่าง
ถ้า lst ไม่เท่ากับ NULL
ให้*del เก็บค่า lst ที่ชี้ไปยังcontent
ใช้ free(lst) เพื่อลบค่าlstที่ชี้ไปในcontent
*/