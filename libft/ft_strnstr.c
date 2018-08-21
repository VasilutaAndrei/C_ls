#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	int		j;
	int		k;
	int		l;

	i = 0;
	j = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[i] != '\0' && len--)
	{
		k = i;
		l = len + 1;
		while (little[j++] == big[k++] && l > 0)
		{
			if (little[j] == '\0')
				return ((char *)(big + i));
			l--;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
