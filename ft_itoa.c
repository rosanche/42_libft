/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 19:14:02 by rosanche          #+#    #+#             */
/*   Updated: 2017/12/08 20:59:14 by rosanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char *tab;
	unsigned int nb;
	size_t len;

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
	if (!(tab = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
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
