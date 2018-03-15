/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 13:40:22 by rosanche          #+#    #+#             */
/*   Updated: 2018/03/10 17:05:58 by rosanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *current;

	if (!(current = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	current->next = NULL;
	current->content_size = (content) ? content_size : 0;
	if (content)
	{
		if (!(current->content = malloc(content_size)))
			return (NULL);
		ft_memcpy(current->content, content, content_size);
	}
	else
		current->content = NULL;
	return (current);
}
