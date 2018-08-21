#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*sou;
	char	*des;

	i = 0;
	des = (char *)dst;
	sou = (char *)src;
	while (i < n)
	{
		*(des + i) = *(sou + i);
		i++;
	}
	return (dst);
}
