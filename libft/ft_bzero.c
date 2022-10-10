/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsohler <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:10:49 by lsohler           #+#    #+#             */
/*   Updated: 2022/10/10 16:17:11 by lsohler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void ft_bzero(void *s, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && n != 0)
	{
		*(unsigned char*)(s + i) = '\0';
		i++;
	}
}