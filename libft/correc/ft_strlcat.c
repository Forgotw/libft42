size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t y;
	size_t x;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	i = ft_strlen(dst);
	y = 0;
	x = ft_strlen(dst) + ft_strlen(src);
	while (src[y] != '\0' && i + 1 < dstsize)
	{
		dst[i++] = src[y++];
	}
	dst[i] = '\0';
	return (x);
}
