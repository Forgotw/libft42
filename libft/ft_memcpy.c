/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsohler <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:17:25 by lsohler           #+#    #+#             */
/*   Updated: 2022/10/11 15:36:02 by lsohler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;

	i = 0;
	if (!src && !dst)
		return (0);
	while (i < n)
	{
		*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
		i++;
	}
	return (dst);
}

int main(int argc, char **argv)
{
	(void)argc;
	char src[] = "Salut cest cool";
	char src2[] = "Salut cest cool";
//	char dst[] = "42Lausanne42Lausanne";
//	char dst2[] = "42Lausanne42Lausanne";

//	printf("%s\n%s\n", src, dst);
//	ft_memcpy(dst, src, atoi(argv[1]));
//	printf("%s\n", dst);
//	printf("%s\n%s\n", src, dst2);
//	memcpy(dst2, src, atoi(argv[1]));
//	printf("%s\n", dst2);
	printf("%s\n", src);
	ft_memcpy(src + 5, src, atoi(argv[1]));
	printf("%s\n", src);
	memcpy(src2 + 5, src, atoi(argv[1]));
	printf("%s\n", src2);
}
