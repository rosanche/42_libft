/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 15:41:24 by rosanche          #+#    #+#             */
/*   Updated: 2017/12/04 03:34:43 by rosanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*src;
	size_t	i;

	i = 0;
	if (!(src = (char *)malloc(sizeof(size_t) * size)))
		return (NULL);
	while (i < size)
	{
		src[i] = '\0';
		i++;
	}
	src[i] = '\0';
	return (src);
}
