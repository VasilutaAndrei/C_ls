#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	len;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	new = ft_strnew(len);
	if (!new)
		return (NULL);
	i = -1;
	j = -1;
	while (++i < ft_strlen(s1))
		*(new + i) = *(s1 + i);
	while (++j < ft_strlen(s2))
		*(new + i++) = *(s2 + j);
	return (new);
}
