/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 19:32:22 by rosanche          #+#    #+#             */
/*   Updated: 2017/11/23 20:36:04 by rosanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, const char c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && ((int*)src)[i] != c)
	{
		((char*)dest)[i] = ((int *)src)[i];
		i++;
	}
	if (((char *)dest)[i] == c)
		return (((char**)dest)[i + 1]);
	else
		return (NULL);
}
