#include "libft.h"

char	*ft_itoa(int n)
{
	char *tab;
	unsigned int nb;
	int len;
	int i;

	nb = n;
	len = 1;
	while (nb >= 10)
	{
		nb /= 10;
		len++;
	}
	if (!(tab = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	while (len > 1)
	{
		while (i < len)
		{
			nb /= 10;
			i++;
		}
		*tab = nb % 10 + '0';
		tab++;
		nb = n;
		i = 0;
		len--;
	}
}
