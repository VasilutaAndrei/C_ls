#include "libft.h"

int		ft_sizei(int s)
{
	int	n;

	n = 0;
	if (s == 0)
		n++;
	while (s)
	{
		n++;
		s = s / 10;
	}
	return (n);
}
