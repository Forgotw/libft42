/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsohler <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:50:05 by lsohler           #+#    #+#             */
/*   Updated: 2022/10/11 15:40:53 by lsohler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;

	i = len;
	if (!src || !dst)
		return (NULL);
	if (src < dst)
	{
		while (i >= 0)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i++;
		}
	}
	return (dst);
}

int main(int argc, char **argv)
{
	(void)argc;
	char src[] = "Salut cest coolSalut cest cool";
	char src2[] = "Salut cest coolSalut cest cool";
//	char dst[] = "42Lausanne42Lausanne";
//	char dst2[] = "42Lausanne42Lausanne";

//	printf("%s\n%s\n", src, dst);
//	ft_memmove(dst, src, atoi(argv[1]));
//	printf("%s\n", dst);
//	printf("%s\n%s\n", src, dst2);
//	memmove(dst2, src, atoi(argv[1]));
//	printf("%s\n", dst2);
	printf("%s\n", src);
	ft_memmove(src + 5, src, atoi(argv[1]));
	printf("%s\n", src);
	memmove(src2 + 5, src2, atoi(argv[1]));
	printf("%s\n", src2);
}
