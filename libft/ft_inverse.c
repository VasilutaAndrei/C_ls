#include "libft.h"

int	ft_inverse(int c)
{
	int x;
	int k;

	x = 1;
	if (c < 0)
	{
		k = 1;
		c = -c;
	}
	else
		k = 0;
	while (c)
	{
		x = (x * 10) + (c % 10);
		c = c / 10;
	}
	if (k != 0)
		x = -x;
	return (x);
}
