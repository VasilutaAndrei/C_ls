#include "libft.h"

int		ft_power(int s)
{
	int	p;

	p = 1;
	while (s)
	{
		p = p * 10;
		s--;
	}
	return (p);
}
