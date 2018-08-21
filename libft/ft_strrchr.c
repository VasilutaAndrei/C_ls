#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		a;

	if (*s == '\0')
		return (NULL);
	a = (int)ft_strlen(s);
	while (a >= 0)
	{
		if (*(s + a) == (char)c)
			return ((char *)s + a);
		a--;
	}
	return (NULL);
}
