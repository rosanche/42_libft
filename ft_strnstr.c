/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 18:40:55 by rosanche          #+#    #+#             */
/*   Updated: 2017/12/08 16:22:42 by rosanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *foin, const char *aiguille, size_t len)
{
	size_t		i;
	size_t		n;
	char		*ptr;

	i = 0;
	while ((foin[i] || aiguille[n]) && i < len)
	{
		n = 0;
		if (aiguille[n] == foin[i])
		{
			ptr = (char *)&foin[i];
			while (aiguille[n])
			{
				i++;
				n++;
			}
			if (!(aiguille[n]))
				return (ptr);
		}
		else
			i++;
	}
	return (NULL);
}
