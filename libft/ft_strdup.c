/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsohler <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 13:41:43 by lsohler           #+#    #+#             */
/*   Updated: 2022/10/15 14:01:28 by lsohler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(const char *s1)
{
	char *s2;
	int	i;

	i = 0;
	s2 = malloc(sizeof(char) * strlen(s1) + 1);
	if (!s2)
		return (NULL);
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

int main(int ac, char **av)
{
	(void)ac;
	
	printf("%s\n%s\n", av[1], ft_strdup(av[1]));
	printf("%s\n", strdup(av[1])); 
}
