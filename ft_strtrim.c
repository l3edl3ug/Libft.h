#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;
	char	*result;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	end =(int )ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[start]) && start <= end)
		start++;
	if (start > end)
		return (ft_strdup(""));
	while (ft_strchr(set , s1[end]) && end >= start)
		end--;
	result = (char *)malloc(sizeof(char) * (end - start + 1));
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, &s1[start], end - start + 1);
	return (result);
}
