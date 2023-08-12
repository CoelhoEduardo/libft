/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoelho- <ecoelho-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:45:56 by ecoelho-          #+#    #+#             */
/*   Updated: 2023/08/11 13:37:54 by ecoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	to_found;

	to_found = (unsigned char)c;
	while (*s && *s != to_found)
	{
		s++;
	}
	if (*s == to_found)
	{
		return ((char *)s);
	}
	else
	{
		return (0);
	}
}
