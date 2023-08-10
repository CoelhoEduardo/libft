/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoelho- <ecoelho-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 20:13:32 by ecoelho-          #+#    #+#             */
/*   Updated: 2023/08/10 19:19:53 by ecoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

static size_t	ft_getwords(char const *s, char c)
{
	size_t	wrd;
	size_t	i;

	wrd = 0;
	i = 0;
	while (*s)
	{
		if (*s != c && !i)
		{
			i = 1;
			wrd++;
		}
		else if (*s == c)
		{
			i = 0;
		}
		s++;
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

static void	ft_allocate(char **tab, char const *s, char sep)
{
	char		**tab_p;
	char const	*tmp;

	tmp = s;
	tab_p = tab;
	while (*tmp)
	{
		while (*s == sep)
			++s;
		tmp = s;
		while (*tmp && *tmp != sep)
			++tmp;
		if (*tmp == sep || tmp > s)
		{
			*tab_p = ft_substr(s, 0, tmp - s);
			s = tmp;
			++tab_p;
		}
	}
	*tab_p = NULL;
}

static int	ft_count_words(char const *s, char sep)
{
	int	word_count;

	word_count = 0;
	while (*s)
	{
		while (*s == sep)
			++s;
		if (*s)
			++word_count;
		while (*s && *s != sep)
			++s;
	}
	return (word_count);
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
			j++;
		}
		while (*s != c && *s)
			s++;
		while (*s == c && *s)
			s++;
	}
	return (ret);
}
