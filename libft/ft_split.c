/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsohler <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:57:28 by lsohler           #+#    #+#             */
/*   Updated: 2022/10/21 15:40:23 by lsohler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
//#include <stdlib.h>
//#include <string.h>

char	*ft_strndup(const char *src, int x)
{
	char	*cpy;
	int		i;

	i = 0;
	cpy = malloc(x * sizeof(char) + 1);
	if (!cpy)
		return (NULL);
	while (i < x)
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

int	ft_count(const char *s, char c)
{
	int	i;
	int	y;

	y = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			y++;
		i++;
	}
	return (y);
}

int	*ft_tab(const char *s, char c)
{
	int	i;
	int	y;
	int	*tab;

	y = 0;
	i = 0;
	tab = malloc(sizeof(int) * ft_count(s, c) + 1);
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			tab[y] = i;
			y++;
		}
		i++;
	}
	if (y == 0)
	{
		tab[y] = -2;
		return (tab);
	}
	tab[y] = -1;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	int		*tab;
	int		y;
	char	**array;
	int		i;

	i = 0;
	y = 0;
	tab = ft_tab(s, c);
	array = malloc(sizeof(char *) * 50);
	if (!array)
		return (NULL);
	if (tab[y] == -2)
	{
		array[i++] = ft_strndup(s, ft_strlen(s) + 1);
		array[i] = NULL;
		return (array);
	}
	if (tab[y] > 0)
		array[i++] = ft_strndup(s, tab[y]);
	while (tab[y] != -1)
	{
		if (tab[y + 1] - tab[y] == 1)
			y++;
		if (tab[y + 1] - tab[y] > 1)
			array[i++] = ft_strndup(&s[tab[y] + 1], tab[y + 1] - tab[y] - 1);
		y++;
	}
	if (tab[y] == -1 && s[ft_strlen(s) - 1] != c)
		array[i++] = ft_strndup(&s[tab[y - 1] + 1], ft_strlen(s));
	array[i] = NULL;
	free(tab);
	return (array);
}
/*
#include <stdio.h>

int main(int ac, char **av)
{
	(void)ac;
	char **array;
	int	i;

	i = 0;
	array = ft_split(av[1], av[2][0]);
	while (array[i] != NULL)
	{
		printf("%s\n", array[i]);
		i++;
	}
}*/
