/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 03:09:37 by rosanche          #+#    #+#             */
/*   Updated: 2017/12/04 03:22:39 by rosanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(unsigned char *dest, unsigned const char *src)
{
	int len;
	int i;

	i = 0;
	len = strlen((char *)dest);
	while (src[i])
	{
		dest[len + i] = src[i];
		i++;
	}
	return ((char *)dest);
}
