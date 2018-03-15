/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 15:43:38 by rosanche          #+#    #+#             */
/*   Updated: 2018/03/15 15:57:52 by rosanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *current;

	while (lst->next)
	{
		(*f)(lst);
		if (!(current = (t_list *)malloc(sizeof(t_list))))
			return (NULL);
		current = lst;
		lst = lst->next;
		current = current->next;
	}
	return (current);
}
