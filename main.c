/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphoonsi <tphoonsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:40:31 by tphoonsi          #+#    #+#             */
/*   Updated: 2024/08/31 17:42:35 by tphoonsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{

    char **result;
    int i;
    // ทดสอบ ft_split
    result = ft_split("Hello, world! This is a test.", ' ');
    
    if (result == NULL)
    {
        printf("Memory allocation failed.\n");
        return (1);
    }

    // แสดงผลลัพธ์และตรวจสอบ memory leaks
    i = 0;
    while (result[i] != NULL)
    {
        printf("result[%d]: %s\n", i, result[i]);
        free(result[i]);
        i++;
    }
    free(result);  // free array ที่จัดสรรหน่วยความจำไว้สำหรับ result

    return (0);
}