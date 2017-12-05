/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 19:30:42 by rosanche          #+#    #+#             */
/*   Updated: 2017/12/04 02:49:20 by rosanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int n;
	int i;
	int res;

	i = 0;
	n = 1;
	while (nptr[i] <= 32 && nptr[i] > 1)
		i++;
	if (nptr[i] == '-')
		n = -1;
	res = 0;
	while (nptr[i])
	{
		res = res * 10 + nptr[i] - '0';
		i++;
	}
	return (res * n);
}
