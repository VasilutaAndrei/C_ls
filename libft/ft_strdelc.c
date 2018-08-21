#include "libft.h"

char	*ft_strdelc(const char *s, char c)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = ft_strlen(s) - 1;
	while (s[i] == c)
		i++;
	while (s[j] == c)
		j--;
	str = ft_strnew(j - i + 1);
	while (i < j)
	{
		str[i] = s[i];
		i++;
	}
	return (str);
}
