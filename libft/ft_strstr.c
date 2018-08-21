#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int		i;
	int		j;
	int		k;
	char	*cpy;

	cpy = (char *)big;
	i = 0;
	j = 0;
	if (*little == '\0')
		return (cpy);
	while (big[i])
	{
		k = i;
		while (little[j] == big[k])
		{
			k++;
			j++;
			if (little[j] == '\0')
				return (cpy + i);
		}
		i++;
		j = 0;
	}
	return (NULL);
}
