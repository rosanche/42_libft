/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 03:31:44 by rosanche          #+#    #+#             */
/*   Updated: 2017/12/04 03:31:48 by rosanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		while (((char *)s1)[i] || ((char *)s2)[i])
		{
			if (((char *)s1)[i] != ((char *)s2)[i])
				return (((char *)s1)[i] - ((char *)s2)[i]);
			else
				i++;
		}
	}
	return (((char *)s1)[i] - ((char *)s2)[i]);
}
