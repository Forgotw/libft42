/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsohler <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 14:32:13 by lsohler           #+#    #+#             */
/*   Updated: 2022/10/15 14:44:11 by lsohler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	int i;
	int	j;
	char *s3;

	j = 0;
	i = 0;
	s3 = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)));
	if (!s3)
		return (NULL);
	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		s3[i+j] = s2[j];
		j++;
	}

	return (s3);
}

int main(int ac, char **av)
{
	(void)ac;
	printf("%s\n%s\n", av[1], av[2]);
	printf("%s\n", ft_strjoin(av[1], av[2]));
}
