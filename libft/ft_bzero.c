#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	k;

	k = 0;
	while (k < n)
	{
		((char *)s)[k] = '\0';
		k++;
	}
}
