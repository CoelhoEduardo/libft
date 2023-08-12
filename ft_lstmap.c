/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoelho- <ecoelho-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:13:35 by ecoelho-          #+#    #+#             */
/*   Updated: 2023/08/11 21:29:56 by ecoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*element;

	new_lst = NULL;
	if (lst == NULL)
	{
		return (NULL);
	}
	while (lst)
	{
		element = ft_lstnew((*f)(lst->content));
		if (!element)
		{
			if (new_lst == NULL)
			{
				return (NULL);
			}
			ft_lstclear(&element, (*del));
			return (NULL);
		}
		ft_lstadd_back(&new_lst, element);
		lst = lst->next;
	}
	return (new_lst);
}
