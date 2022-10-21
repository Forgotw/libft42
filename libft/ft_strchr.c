char *ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (str[i] = (char)c)
			return (*(char *)s + i);
		i++;
	}
	return (NULL);
}
