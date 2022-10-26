#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i] !='\0')
		i++;
	return (i);
}

int	ft_count(char const *s, char c)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			x++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (x);
}

char	*ft_worddup(char const *s, int len)
{
	char	 *dst;
	int	i;

	i = 0;
	dst = malloc(sizeof(char) * ft_strlen(s) + 1);
	while (s[i] != '\0' && i < len)
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

void	ft_splitword(char **array, char const *s, char c)
{
	int	i;
	int	x;
	int	a;

	i = 0;
	x = 0;
	a = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		while (s[i + x] != '\0' && s[i + x] != c)
			x++;
		if (x > 0)
		{
			array[a++] = ft_worddup(&s[i], x);
			i = i + x;
			x = 0;
		}
	}
	array[a] = NULL;
}

char	**ft_split(char const *s, char c)
{
	int	x;
	char	**array;

	if (!s)
		return (NULL);
	x = ft_count(s, c);
	array = malloc(sizeof(char *) * (x + 1));
	if (!array)
		return (NULL);
	ft_splitword(array, s, c);
	return (array);
}

int main (int ac, char **av)
{
	(void)ac;
	char **array;
	int i;

	i = 0;
	array = ft_split(av[1], av[2][0]);
	while (array[i] != NULL)
	{
		printf("%s\n", array[i]);
		i++;
	}
}
