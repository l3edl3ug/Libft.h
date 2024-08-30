#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char *str;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (ft_strlen(s) <= start)
		return (ft_strdup(""));
	if ((ft_strlen(s) - start) < len)
		len = ft_strlen(s) - start;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (i < len && s[start + i])
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);

}
/*
#include <stdio.h> 

char *ft_substr(char const *s, unsigned int start, size_t len);

int main(void)
{
    char s[] = "Hello, World!";
    char *substring;

    // ใช้ ft_substr โดยเริ่มต้นที่ตำแหน่ง 0 และขอความยาว 30
    substring = ft_substr(s, 0, 30);

    printf("Original string: '%s'\n", s);
    printf("Substring: '%s'\n", substring);

    free(substring);

    return 0;
}
*/
