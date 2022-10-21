size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!src || !dst)
		return (0);
	while (dst[i] != '\0' && i < (int)dstsize)
		i++;
	while (src[j] != '\0' && i < (int)dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (dstsize != 0 || (int)dstsize < ft_strlen(dst)
		dst[i] = '\0';
	

}
