/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsohler <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:58:43 by lsohler           #+#    #+#             */
/*   Updated: 2022/10/10 14:54:30 by lsohler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void *ft_memset(void *str, int c, size_t len)
{
	size_t i;

	i = 0;
	while ( i < len )
	{
		*(unsigned char *)(str + i) = (unsigned char)c;
		i++;
	}
	return (str);
}

int main()
{
	char *str;
	
	str = malloc(sizeof (char) * 150);
	strcpy(str,"Salut c'est cool");
	printf("%s", str);
	ft_memset(str, 'S', 5);
	printf("%s", str);
}

