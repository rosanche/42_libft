/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 16:20:19 by rosanche          #+#    #+#             */
/*   Updated: 2017/12/04 03:36:48 by rosanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*src;
	int		i;

	i = 0;
	while (s[i])
		i++;
	if (!(src = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (*s)
	{
		src[i] = (*f)(*s);
		i++;
		s++;
	}
	src[i] = '\0';
	return (src);
}
