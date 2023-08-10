/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoelho- <ecoelho-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 18:37:28 by ecoelho-          #+#    #+#             */
/*   Updated: 2023/08/10 18:48:06 by ecoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*destiny;
	char	*source;
	size_t	i;

	if (!src && !dest)
		return (0);
	i = 0;
	destiny = (char *)dest;
	source = (char *)src;
	while (i < n)
	{
		destiny[i] = source[i];
		i++;
	}
	return (destiny);
}
