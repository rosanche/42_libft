/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/10 19:06:59 by rosanche          #+#    #+#             */
/*   Updated: 2018/03/10 19:16:32 by rosanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *,size_t))
{
	t_list **current;

	if (alst)
	{
		current = alst;
		while (*current)
		{
			if (*current)
			{
				*alst = (*alst)->next;
				(*del)((*current)->content, (*current)->content_size);
			}
			ft_memdel((void**)alst);
			*current = *alst;
		}
	}
}
