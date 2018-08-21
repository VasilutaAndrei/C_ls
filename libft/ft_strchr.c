#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int a;

	a = 0;
	while (*(s + a) != '\0')
	{
		if (*(s + a + 1) == '\0' && (char)c == '\0')
			return ((char *)(s + a + 1));
		if (*(s + a) == (char)c)
			return ((char *)(s + a));
		a++;
	}
	return (NULL);
}
