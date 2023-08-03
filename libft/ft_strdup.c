/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoelho- <ecoelho-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 18:49:11 by ecoelho-          #+#    #+#             */
/*   Updated: 2023/08/02 21:29:36 by ecoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	unsigned int	len;
	char			*copy;

	len = ft_strlen(s) + 1;
	copy = malloc((unsigned int)len);
	if (!copy)
	{
		return (0);
	}
	ft_memcpy(copy, s, len);
	return (copy);
}
