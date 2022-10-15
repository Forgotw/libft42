/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsohler <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 13:56:23 by lsohler           #+#    #+#             */
/*   Updated: 2022/10/15 14:40:56 by lsohler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void *ft_calloc(size_t count, size_t size)
{
	int	i;
	void *s2;

	i = 0;
	s2 = malloc(count * size);
	if (!s2)
		return(NULL);
	while (i <= size)
	{
		s2[i] = '\0';
		i++;
	}
}
