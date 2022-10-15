/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsohler <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 14:01:38 by lsohler           #+#    #+#             */
/*   Updated: 2022/10/15 14:41:08 by lsohler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char *s2;

	i = 0;
	s2 = malloc(sizeof(char) * len + 1);
	if (!s2)
		return (NULL);
	while (i <= len)
	{
		s2[i] = s[start + i];
		i++;
	}
	return (s2);
}

int main(int ac, char **av)
{
	(void)ac;

	printf("%s\n", ft_substr(av[1], atoi(av[2]), atoi(av[3])));
}
