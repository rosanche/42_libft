/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 21:30:20 by rosanche          #+#    #+#             */
/*   Updated: 2017/11/23 19:24:38 by rosanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	int i;

	i = 0;
	if (!(s = (int *)malloc(sizeof(int) * n)))
		return (NULL);
	while (i < n)
	{
		((int *)s)[i] = c;
		i++;
	}
	return (s);
}
