/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoelho- <ecoelho-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 19:26:31 by ecoelho-          #+#    #+#             */
/*   Updated: 2023/08/11 19:09:22 by ecoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		len;
	const char	*last;
	char		*str;

	len = ft_strlen(s1);
	last = &s1[len - 1];
	while (ft_strchr(set, *s1) && *s1)
	{
		s1++;
	}
	while (ft_strchr(set, *last) && *last)
	{
		last--;
	}
	str = ft_substr(s1, 0, ft_strlen(s1) - ft_strlen(last) + 1);
	return (str);
}
