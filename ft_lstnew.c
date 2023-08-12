/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoelho- <ecoelho-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 19:47:03 by ecoelho-          #+#    #+#             */
/*   Updated: 2023/08/11 20:52:04 by ecoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_ls;

	new_ls = malloc(1 * sizeof(t_list));
	if (!new_ls)
	{
		return (NULL);
	}
	new_ls->content = content;
	new_ls->next = NULL;
	return (new_ls);
}
