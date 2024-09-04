#include "libft.h"

static int	ft_count(char const *str, char c)
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

static void	ft_freearray(char **ptr, int i)
{
	while (i > 0)
	{
		i--;
		free(ptr[i]);
	}
	free(ptr);
}

static char	**ft_condition(char const *s, char c, char **result)
{
	size_t	j;
	size_t	i;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		if (i > start)
		{
			result[j] = ft_substr(s, start, i - start);
			if (result[j] == NULL)
			{
				ft_freearray(result, j);
				return (NULL);
			}
			j++;
		}
	}
	return (result);
}
char	**ft_split(char const *s, char c)
{
	char	**result;

	if (s == NULL)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (result == NULL)
		return (NULL);	
	if (ft_condition(s, c, result) == NULL)
	{
		free(result);
		return (NULL);
	}
	result[ft_count(s, c)] = NULL;
	return (result);
}
/*
ลูปแรกใน ลูปwhile ใหญ่
ถ้า s[i] ไม่ถึง null ให้ทำ loopย่อยแล้วเช็คcodition if
ลูปแรก s[i] == c
เป็นตัวเช็คว่า s[i] เจอตัวขั้นไหม ถ้าเจอให้รับ i++ เพิ่มไป
กำหนดให้ start = i
ลูปที่สอง ให้s[i]อ่านค่าสตริงนับไปเรื่อยๆโดยกำหนดs[i]ซ้ำเพื่อให้เข้าconditionของมัน
และcondition ifคือเมื่อ iมีค่ามากกว่า start นั้นหมายถึงกรณีที่มันเจอตัวขั้น iจะถูก +เพิ่ม และจะไม่ไปทำในเงื่อไขifเพราะ i == start
ทีนี้ result[j++]จะทำการเก็บค่าarrayเป็นชุดเหมือนกับว่า result[j][substr] และ j ก็เลื่อนไปเรื่องๆถึงตัวถัดไป
ตัวอย่างเช่น:
เริ่มต้นที่ i = 0, j = 0, result = array of pointers.
-วนลูปแรก 
ข้ามตัวขั้น: s[i] เป็น ' ' --> ข้ามไป i = 6.
บันทึกตำแหน่งเริ่มต้น: start = 0.
ค้นหาจุดสิ้นสุดของคำ: s[i] เป็น 'o' จนกว่าจะเจอ ' '.
คำที่พบคือ "hello", เก็บใน result[j++].
-ลูปต่อไป
บันทึกตำแหน่งเริ่มต้นใหม่: start = 8.
ค้นหาจุดสิ้นสุดของคำ: s[i] เป็น 'd' จนสิ้นสุดสตริง.
คำที่พบคือ "world", เก็บใน result[j++].
ทำไม result[j] = NULL
เพราะว่าresult[j]เป็น array 1มิติเราจะไม่ใช้ '\0' เพราะมันสำหรับจุดสิ้นสุดสตริงนั่นหมายถึงarray 2มิติ
result[0]: ชี้ไปที่ string "hello"
result[1]: ชี้ไปที่ string "world"
result[2]: ชี้ไปที่ NULL เพื่อระบุว่าเป็นจุดสิ้นสุดของ array ของ pointers
*/
