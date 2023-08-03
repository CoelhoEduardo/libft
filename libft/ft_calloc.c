/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoelho- <ecoelho-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 18:46:03 by ecoelho-          #+#    #+#             */
/*   Updated: 2023/08/03 19:23:52 by ecoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pointer;
	size_t	max_int;

	max_int = -1;
	if (size != 0 && nmemb > max_int / size)
	{
		return (NULL);
	}
	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	pointer = malloc(nmemb * size);
	if (pointer == NULL)
	{
		return (NULL);
	}
	ft_bzero(pointer, (nmemb * size));
	return (pointer);
}
