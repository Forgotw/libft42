#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
	int i;
	char *dsta;
	char *srca;

	dsta = (char *)dst;
	srca = (char *)src;

	i = (int)len - 1;
	if (!dst || !src)
		return (NULL);
	if (dsta > srca)
	{
		while (i >= 0)
		{
			dsta[i] = srca[i];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)len)
		{
			dsta[i] = srca[i],
			i++;
		}
	}
	return (dst);
}
/*
void
	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	if (!dst || !src)
		return (NULL);
	if (dst > src)
	{
		i = (int)len - 1;
		while (i >= 0)
		{
			*(char*)(dst + i) = *(char*)(src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)len)
		{
			*(char*)(dst + i) = *(char*)(src + i);
			i++;
		}
	}
	return (dst);
}
*/
int main(int ac, char **av)
{
	(void)ac;
	char src[] = "AAAABBBBCCCCDDDD";
	char src2[] = "AAAABBBBCCCCDDDD";
	
	printf("%s\n", src);
	ft_memmove(src + 4, src, atoi(av[1]));
	memmove(src2 + 4, src2, atoi(av[1]));
	printf("%s\n%s\n", src, src2);
}
