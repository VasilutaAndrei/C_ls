#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *start;

	start = (unsigned char *)b;
	while (len > 0)
	{
		*start = (unsigned char)c;
		start++;
		len--;
	}
	return (b);
}
