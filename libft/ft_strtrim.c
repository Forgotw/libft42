/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsohler <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 14:44:20 by lsohler           #+#    #+#             */
/*   Updated: 2022/10/15 16:33:44 by lsohler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;
	int y;
	int x;
	char *s2;

	i = 0;
	j = strlen(s1);
	y = 0;
	x = 0;
	while (s1[i] != '\0')
	{
		while (set[y] != '\0')
		{
			while (set[y] == s1[i])
			{
				i++;
				j--;
			}
			y++;
		}
		y = 0;
		i++;
	}
	i = 0;
	s2 = malloc(sizeof(char) * 150);
	if (!s2)
		return (NULL);
/*	while (s1[i] != '\0')
	{
		while (set[y] != '\0')
		{
			while (set[y] == s1[i])
				i++;
			y++;
		}
		s2[x] = s1[i];
		x++;
		y = 0;
		i++;
	}*/
	while (s1[i] != '\0')
	{
		while (set[y] != '\0')
		{
			if (set[y] != s1[i])
				y++;
			else
			{
				i++;
				y = 0;
			}
		}
		s2[x] = s1[i];
		x++;
		y = 0;
	}
	return(s2);
}

int main(int ac, char **av)
{
	(void)ac;
	printf("%s\n%s\n", av[1], av[2]);
	printf("%s\n", ft_strtrim(av[1], av[2]));
}
