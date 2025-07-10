/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoelho- <ecoelho-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 17:47:23 by ecoelho-          #+#    #+#             */
/*   Updated: 2025/07/09 23:14:21 by ecoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	int				len;
	unsigned int	dest_len;
	unsigned int	total_len;

	if (dest != 0)
		dest_len = ft_strlen(dest);
	else
		dest_len = 0;
	total_len = dest_len + ft_strlen(src);
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
