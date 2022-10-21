char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *dst;
	int	i;

	i = 0;
	dst = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!dst)
		return (NULL);
	while (s[i] != '\0')
	{
		dst[i] = (*f)(i, s[i]);
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
