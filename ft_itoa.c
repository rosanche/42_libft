/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 19:14:02 by rosanche          #+#    #+#             */
/*   Updated: 2017/12/09 21:04:53 by rosanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*fill(char *tab, unsigned int nb, size_t len, int n)
{
<<<<<<< HEAD
	char *tab;
	unsigned int nb;
	int len;
	int i;
	int k;

=======
	tab[len] = '\0';
>>>>>>> 7135655e3ea47981033926a62d57a7918a021271
	nb = n;
	if (n < 0)
		nb = -n;
	while (len > 0)
	{
		tab[len - 1] = nb % 10 + '0';
		nb /= 10;
		len--;
	}
	if (n < 0)
		tab[0] = '-';
	return (tab);
}

char			*ft_itoa(int n)
{
	char			*tab;
	unsigned int	nb;
	size_t			len;

	len = 1;
	nb = n;
	if (0 > n)
	{
		len++;
		nb = -n;
	}
	while (nb >= 10)
	{
		nb /= 10;
		len++;
	}
<<<<<<< HEAD
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
=======
	if (!(tab = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	tab = fill(tab, nb, len, n);
	return (tab);
>>>>>>> 7135655e3ea47981033926a62d57a7918a021271
}
