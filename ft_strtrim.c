/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 19:14:43 by rosanche          #+#    #+#             */
/*   Updated: 2017/12/04 03:32:54 by rosanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*src;
	int		i;
	int		v;
	int		n;

	i = 0;
	v = 0;
	while (s[i])
		i++;
	if (!(src = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	while (s[v] == ' ' || s[v] == '\n' || s[v] == '\t')
		v++;
	i--;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i--;
	n = 0;
	while (v <= i)
		src[n++] = s[v++];
	src[n] = '\0';
	return (src);
}
