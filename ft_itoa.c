/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoelho- <ecoelho-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 16:16:35 by ecoelho-          #+#    #+#             */
/*   Updated: 2023/08/10 13:34:42 by ecoelho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_nbrlen(int nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
	{
		len++;
	}
	while (nb != 0)
	{
		len++;
		nb = nb / 10;
	}
	return (len);
}

void	ft_reverse(char *s, int len)
{
	int		i;
	int		j;
	char	temp;

	i = 0;
	j = len - 1;
	while (i < j)
	{
		if (s[i] != '-' && s[j] != '-')
		{
			temp = s[i];
			s[i] = s[j];
			s[j] = temp;
			i++;
			j--;
		}
		else
		{
			i++;
		}
	}
}

char	*ft_itoa(int n)
{
	char		*buf;
	int			len;
	long int	nbr;

	len = 0;
	nbr = n;
	buf = malloc((ft_nbrlen(n) + 1) * sizeof(char));
	if (!buf)
		return (NULL);
	if (nbr == 0)
		buf[len++] = '0';
	if (nbr < 0)
	{
		buf[len++] = '-';
		nbr *= -1;
	}
	while (nbr > 0)
	{
		buf[len++] = '0' + (nbr % 10);
		nbr /= 10;
	}
	buf[len] = '\0';
	ft_reverse(buf, len);
	return (buf);
}
