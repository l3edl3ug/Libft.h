#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*temp;

	temp = lst;
	count = 0;
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
