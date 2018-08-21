#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;
	char	*str_new;

	str = (char *)s;
	if (str && f)
	{
		i = 0;
		if (!(str_new = ft_memalloc(ft_strlen(str) + 1)))
			return (NULL);
		while (str[i])
		{
			str_new[i] = (*f)(i, str[i]);
			i++;
		}
		str_new[i] = '\0';
		return (str_new);
	}
	return (NULL);
}
