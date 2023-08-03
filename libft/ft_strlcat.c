/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoelho- <ecoelho-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 17:47:23 by ecoelho-          #+#    #+#             */
/*   Updated: 2023/08/02 21:05:15 by ecoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	len;
	unsigned int	dest_len;
	unsigned int	total_len;

	total_len = ft_strlen(dest) + ft_strlen(src);
	dest_len = ft_strlen(dest);
	len = 0;
	if (size > dest_len)
	{
		while (src[len] != '\0' && dest_len < size - 1)
		{
			dest[dest_len] = src[len];
			dest_len++;
			len++;
		}
		dest[dest_len] = '\0';
		return (total_len);
	}
	return (ft_strlen(src) + size);
}
