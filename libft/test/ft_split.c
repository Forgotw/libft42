#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int *ft_pos(const char *s, char c)
{
	int	i;
	int	*tab;
	int	y;

	y = 0;
	i = 0;
	tab = malloc(sizeof(int) * 50);
	while (s[i] != '\0')
	{
		if(s[i] == c)
		{
			tab[y++] = i;
		}
		i++;
	}
	tab[y] = -1;
	return (tab);
}
char **ft_array(const char *s, char c, int *tab, char **array)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	if (tab[0] > 0)
	{
		array[i++] = strndup(s, (size_t)tab[0]);
//		y++;
	}
	while (tab[y] != -1)
	{
		while ((tab[y + 1] - tab[y]) == 1)
			y++;
		if (s[tab[y] + 1] != '\0')
		{
			array[i++] = strndup(&s[tab[y] + 1], (size_t)(tab[y + 1] - tab[y] - 1));
		}
		y++;
	}
//	if (tab[y + 1] == -1 && s[tab[y] + 1] != '\0')
//		array[i++] = strndup(&s[tab[y] + 1], (strlen(s) + 1));
	array[i] = NULL;
	return (array);
}

char **ft_split(const char *s, char c)
{
	char **array;
	int *tab;

	tab = ft_pos(s, c);
	array = malloc(sizeof(char *) * 50);
	if (!array)
		return (NULL);
	if (!c || tab[0] == -1)
	{
		array[0] = strdup(s);
		array[1] = NULL;
		free(tab);
		return (array);
	}
	else
	{
		array = ft_array(s, c, tab, array);
		free(tab);
		return (array);
	}
}
int main(int ac, char **av)
{
	(void)ac;
	int *tab;
	int	i;
	char **array;

	i = 0;
	tab = ft_pos(av[1], av[2][0]);
	array = ft_split(av[1], av[2][0]);
	while (tab[i] != -1)
		printf("%i\n", tab[i++]);
	i = 0;
	while (array[i] != NULL)
		printf("%s\n", array[i++]);
}
