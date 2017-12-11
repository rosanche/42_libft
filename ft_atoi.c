/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 19:30:42 by rosanche          #+#    #+#             */
/*   Updated: 2017/12/11 21:00:33 by rosanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int n;
	int i;
	unsigned int res;

	i = 0;
	n = 1;
	if (!nptr)
		return (0);
	while (nptr[i] <= 32 && nptr[i] > 1 && nptr[i] != 27)
		i++;
	if (nptr[i] == '-')
	{
		n = -1;
		i++;
	}
	res = 0;
	while (nptr[i] && nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = res * 10 + nptr[i] - '0';
		i++;
	}
	return (res * n);
}
