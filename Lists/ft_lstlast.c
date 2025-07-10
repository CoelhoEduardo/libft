/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoelho- <ecoelho-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 10:34:18 by ecoelho-          #+#    #+#             */
/*   Updated: 2025/07/09 23:14:21 by ecoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*new_lst;

	new_lst = lst;
	if (new_lst == NULL)
	{
		return (NULL);
	}
	while (new_lst->next)
	{
		new_lst = new_lst->next;
	}
	return (new_lst);
}
