/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsohler <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:42:54 by lsohler           #+#    #+#             */
/*   Updated: 2022/10/15 12:25:15 by lsohler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	i;
	int j;

	j = ft_strlen(dst);
	i = 0;
	while (src[i] != '\0' && i + j + 1 < (int)dstsize)
	{
		dst[j + i] = src[i];
		i++;
	}
	if (dstsize != 0 || ft_strlen(dst) > (int)dstsize)
		dst[ft_strlen(dst) + i] = '\0';
	return (ft_strlen((char *)src) + j);
}

int main(int ac, char **av)
{
//	(void)av;
	(void)ac;
	char dst[150] = "Salut";
	char dst2[150] = "Salut";
	char src[] = "c'est cool";

	printf("%s\n%s\n", dst, src);
	printf("%zu\n", ft_strlcat(dst, src, atoi(av[1])));
	printf("%lu\n",strlcat(dst2, src, atoi(av[1])));
	printf("%s\n%s\n", dst, dst2);
}
