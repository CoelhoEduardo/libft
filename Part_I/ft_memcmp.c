/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoelho- <ecoelho-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 19:07:45 by ecoelho-          #+#    #+#             */
/*   Updated: 2025/07/09 23:14:21 by ecoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*src_comp;
	unsigned char	*dest_comp;
	size_t			i;

	src_comp = (unsigned char *)s1;
	dest_comp = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (src_comp[i] != dest_comp[i])
			return (src_comp[i] - dest_comp[i]);
		i++;
	}
	return (0);
}
