/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 18:40:55 by rosanche          #+#    #+#             */
/*   Updated: 2017/12/09 20:15:15 by rosanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *meule_de_foin, const char *aiguille)
{
	int			i;
	int			n;
	const char	*ptr;

	i = 0;
	while (meule_de_foin[i] || aiguille[n])
	{
		n = 0;
		while (aiguille[n] == meule_de_foin[i])
		{
			ptr = &meule_de_foin[i];
			while (aiguille[n])
			{
				i++;
				n++;
			}
			if (!(aiguille[n]))
				return ((char *)ptr);
		}
		i++;
	}
	return (NULL);
}
