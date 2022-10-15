/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsohler <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 12:29:30 by lsohler           #+#    #+#             */
/*   Updated: 2022/10/15 12:59:38 by lsohler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *ft_strnstr(const char *haystack,const char *needle, size_t len)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	if (!needle)
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		while (haystack[i + j] == needle[j] && i + j <(int)len)
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)&haystack[i]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}

int main(int ac, char **av)
{
	(void)ac;

	printf("%s\n", ft_strnstr(av[1], av[2], atoi(av[3])));
	printf("%s\n", strnstr(av[1], av[2], atoi(av[3])));
}
