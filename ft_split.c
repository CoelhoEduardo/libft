/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduardocoelho <eduardocoelho@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 20:13:32 by ecoelho-          #+#    #+#             */
/*   Updated: 2024/01/04 01:36:08 by eduardocoel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_getwords(char const *s, char c)
{
	size_t	wrd;
	size_t	i;

	wrd = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			wrd++;
            while (s[i] != c && s[i])
            {
                i++;
            }
		}
        else
        {
            i++;
        }
		
	}
	return (wrd);
}

static size_t	ft_split_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i])
	{
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**ret;

	j = 0;
	i = ft_getwords(s, c);
	ret = (char **)ft_calloc(i + 1, sizeof(char *));
	if (ret == NULL)
	{
		return (NULL);
	}
	while (*s)
	{
		if (*s != c)
		{
			ret[j] = ft_substr(s, 0, ft_split_len(s, c));
			s++;
			j++;
		}
		while (*s != c && *s)
			s++;
		while (*s == c && *s)
			s++;
	}
	return (ret);
}
