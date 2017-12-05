/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 19:00:10 by rosanche          #+#    #+#             */
/*   Updated: 2017/12/04 03:37:40 by rosanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		v;
	char	*src;

	i = 0;
	v = 0;
	while (s1[i])
		i++;
	while (s2[v])
		v++;
	if (!(src = (char *)malloc(sizeof(char) * (i + v + 1))))
		return (NULL);
	i = 0;
	v = -1;
	while (s1[++v])
		src[i++] = s1[v];
	v = -1;
	while (s2[++v])
		src[i++] = s2[v];
	src[i] = '\0';
	return (src);
}
