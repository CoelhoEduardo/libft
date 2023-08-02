void	ft_bzero(void *s, unsigned int len)
{
	char	*str;
	unsigned int	i;

	str = s;
	i = 0;
	while (i < len)
	{
		str[i] = 0;
		i++;
	}
}
