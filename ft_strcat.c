/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 03:09:37 by rosanche          #+#    #+#             */
/*   Updated: 2017/12/07 21:27:18 by rosanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(unsigned char *dest, unsigned const char *src)
{
	size_t len;
	size_t i;

	i = 0;
	len = ft_strlen((char *)dest);
	while (src[i])
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + 1] = '\0';
	return ((char *)dest);
}
