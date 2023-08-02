void	*ft_memset(void *s, int c, unsigned len)
{
	unsigned char *pointer = s;
	while (len)
	{
		*pointer++ = (unsigned char)c;
		len--;
	}

	return s;
}
