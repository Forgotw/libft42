/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsohler <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:42:54 by lsohler           #+#    #+#             */
/*   Updated: 2022/10/15 12:25:13 by lsohler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && i + 1 < (int)dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize != 0)
		dst[i] = '\0';
	return (ft_strlen(src));
}

int main(int ac, char **av)
{
//	(void)av;
	(void)ac;
	char dst[150] = "Salut";
	char dst2[150] = "Salut";
	char src[] = "c'est cool";

	printf("%s\n%s\n", dst, src);
	printf("%zu\n", ft_strlcpy(dst, src, atoi(av[1])));
	printf("%lu\n",strlcpy(dst2, src, atoi(av[1])));
	printf("%s\n%s\n", dst, dst2);
}
