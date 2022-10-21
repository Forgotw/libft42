/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsohler <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:42:54 by lsohler           #+#    #+#             */
/*   Updated: 2022/10/19 16:23:55 by lsohler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		i;
	int		j;
	size_t	x;

	x = ft_strlen(dst) + ft_strlen((char *)src);
	i = 0;
	j = 0;
	while (dst[i] != '\0')
	{
		i++;
	}
	if (dstsize > ft_strlen(dst))
	{
		while (src[j] != '\0' && i < ((int)dstsize - 1))
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
		return (x);
	}
	return (ft_strlen(src) + dstsize);
}
