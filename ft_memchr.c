/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 03:07:19 by rosanche          #+#    #+#             */
/*   Updated: 2017/12/04 03:17:56 by rosanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, unsigned char c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && ((char *)s)[i] != c)
		i++;
	if (((char *)s)[i] == c)
		return (&((unsigned char *)s)[i]);
	else
		return (NULL);
}
