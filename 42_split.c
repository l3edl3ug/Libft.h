#include "libft.h"

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**result;
	
	if (s == NULL)
		return (NULL);
	result = (char **)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			result[j++] = ft_substr(s, 0, i);
			s += i + 1;
			i = 0;
		}
		else
			i++;
	}
	result[j] = NULL;
	return (result);
}
