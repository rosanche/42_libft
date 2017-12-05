/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 21:09:10 by rosanche          #+#    #+#             */
/*   Updated: 2017/12/04 03:29:43 by rosanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_word(char const *s, int c)
{
	int i;
	int word;

	i = 0;
	word = -1;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		word++;
		while (s[i] != c && s[i])
			i++;
	}
	return (word);
}

char	*word_fill(char const *s, int pos, int c)
{
	int i;
	char *src;

	i = pos;
	while (s[i] != c && s[i])
		i++;
	if(!(src = (char *)malloc(sizeof(char) * (i +  1))))
		return (NULL);
	i = 0;
	while (s[pos] != c && s[pos])
	{
		ft_putchar('L');
		src[i] = s[pos];
		i++;
		pos++;
	}
	src[i] = '\0';
	return (src);
}

char	**ft_strsplit(char const *s, int c)
{
	int i;
	int n;
	int word;
	char **tab;

	i = 0;
	word = count_word(s, c);
	if (!(tab = (char **)malloc(sizeof(char *) * (word + 1))))
		return (NULL);
	n = 0;
	while (i < word)
	{
		while (s[n] == c)
		{
			n++;
		}
		ft_putchar('K');
		tab[i] = word_fill(s, n, c);
		i++;
		ft_putchar('J');
		while (s[n] != c && s[n] != '\0')
		{
			ft_putchar('S');
			n++;
		}
	}
	tab[i][0] = '\0';
	return (tab);
}

int	main()
{
	char **tab;
	int i;
	int n;

	ft_putchar('c');
	tab = ft_strsplit("*salut*les***etudiants*", 42);
	i = 0;
	while (tab[i][n])
	{
		n = 0;
		while(tab[i])
		{
			ft_putchar(tab[i][n]);
			n++;
		}
		i++;
	}
}
