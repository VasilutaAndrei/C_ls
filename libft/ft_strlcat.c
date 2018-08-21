#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t k;
	size_t l;

	k = ft_strlen(dst);
	i = k;
	j = 0;
	l = ft_strlen(src);
	if (size < k + 1)
		return (l + size);
	if (size > k + 1)
	{
		while (i < size - 1)
			*(dst + i++) = *(src + j++);
		*(dst + i) = '\0';
	}
	return (k + l);
}
