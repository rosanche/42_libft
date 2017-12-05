/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 03:01:15 by rosanche          #+#    #+#             */
/*   Updated: 2017/12/04 03:27:46 by rosanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(unsigned char *dest, unsigned const char *src, size_t n)
{
	int len;
	int i;

	i = 0;
	len = strlen((char *)dest);
	while (src[i] && i < n)
	{
		dest[len + i] = src[i];
		i++;
	}
	return ((char *)dest);
}
