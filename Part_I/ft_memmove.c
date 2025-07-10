/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoelho- <ecoelho-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 18:40:49 by ecoelho-          #+#    #+#             */
/*   Updated: 2025/07/09 23:14:21 by ecoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*source;
	char	*destiny;

	if (!src && !dest)
		return (0);
	source = (char *)src;
	destiny = (char *)dest;
	if (destiny > source)
	{
		while (n)
		{
			destiny[n - 1] = source[n - 1];
			n--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (destiny);
}
