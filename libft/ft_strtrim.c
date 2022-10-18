/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsohler <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 14:44:20 by lsohler           #+#    #+#             */
/*   Updated: 2022/10/18 13:26:08 by lsohler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_tabpos1(char const *s1, char const *set)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	while (set[i] != '\0')
	{	
		if (s1[y] == set[i])
		{
			y++;
			i = 0;
		}
		if (s1[y] != set[i])
		{
			i++;
		}
	}
	return (y);
}

int ft_tabpos2(char const *s1, char const *set)
{
	int	i;
	int	y;

	y = ft_strlen(s1) - 1;
	i = 0;
	while (set[i] != '\0')
	{
		if (s1[y] == set[i]) //|| s1[y] == '\0')
		{
			y--;
			i = 0;
		}
		if (s1[y] != set[i])
		{
			i++;
		}
	}
	return (y);
}

char *ft_strtrim(char const *s1, char const *set)
{
	int x;
	int	y;
	char *s2;

	x = ft_tabpos1(s1, set);
	y = ft_tabpos2(s1, set);
	s2 = ft_strndup(&s1[x], y - x  + 1);
	return (s2);
}

int main(int ac, char **av)
{
	(void)ac;
	int x;
	int y;

	x = ft_tabpos1(av[1], av[2]);
	y = ft_tabpos2(av[1], av[2]);
	printf("%s\n%s\n", av[1], av[2]);
	printf("%s\n", ft_strtrim(av[1], av[2]));
	printf("%i\n%i\n", x, y);
}
