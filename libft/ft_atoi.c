#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int nr;
	int negative;

	nr = 0;
	negative = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
		negative = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while ((str[i] >= '0' && str[i] <= '9') && str[i])
	{
		nr = nr * 10 + (str[i] - '0');
		i++;
	}
	if (negative == 1)
		return (-nr);
	else
		return (nr);
}
