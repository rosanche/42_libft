/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 19:32:10 by rosanche          #+#    #+#             */
/*   Updated: 2017/12/07 20:06:11 by rosanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t dn;
	size_t sn;

	dn = ft_strlen(dst);
	sn = ft_strlen(src);
	i = -1;
	if (size < dn)
		sn += size;
	else
		sn += dn;
	while (src[++i] && size > i + sn + 1)
		dest[i + dn] = src[i];
	dst[i + dn] = '\0';
	return (sn);
}

//size envoit un certain nombre;
//trois variables : i pour se promener
