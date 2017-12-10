#include "libft.h"

char	*ft_itoa(int n)
{
	char *tab;
	unsigned int nb;
	int len;
	int i;
	int k;

	nb = n;
	len = 1;
	while (nb >= 10)
	{
		nb /= 10;
		len++;
	}
	printf("%d", len);
	if (!(tab = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	k = 0;
	nb = n;
	printf("%d", nb);
	while (n > 0)
	{
		while (nb >= 10)
		{
			nb /= 10;
			i++;
		}
		tab[k] = nb % 10 + '0';
		k++;
		n /= 10;
		nb = n;
		i = 0;
		len--;
	}
	tab[k] = '\0';
	return (tab);
}

int	main()
{
	printf("%s", ft_itoa(1000));
}
