/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 18:40:55 by rosanche          #+#    #+#             */
/*   Updated: 2017/12/04 03:33:54 by rosanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *foin, const char *aiguille, size_t len)
{
	int			i;
	int			n;
	const char	*ptr;

	i = 0;
	while (foin[i] && i < len)
	{
		n = 0;
		while (aiguille[n] == foin[i])
		{
			ptr = &foin[i];
			while (aiguille[n] && aiguille[n] == foin[i + n])
				n++;
			if (!(aiguille[n]))
				return ((char *)ptr);
		}
		i++;
	}
	return (NULL);
}
