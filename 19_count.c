/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   19_count.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphoonsi <tphoonsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:11:43 by tphoonsi          #+#    #+#             */
/*   Updated: 2024/08/28 13:25:25 by tphoonsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(char const *str, char c)
{
	int	flag;
	int	count;

	flag = 0;
	count = 0;
	while (*str)
	{
		if (flag == 0 && *str != c)
		{
			count++;
			flag = 1;
		}
		else if (*str == c)
			flag = 0;
		str++;
	}
	return (count);
}
/*
int	main(void)
{
	char	str[] = "hello world this is a test";
	char	delimiter;
	int		count;

	delimiter = ' ';
	count = ft_count(str, delimiter);
	printf("Number of words: %d\n", count);
	return (0);
}
*/
