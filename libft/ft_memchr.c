#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*start;

	start = (void *)s;
	while (n > 0)
	{
		if (*start == (unsigned char)c)
			return (start);
		start++;
		n--;
	}
	return (0);
}
