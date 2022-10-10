/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsohler <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:32:32 by lsohler           #+#    #+#             */
/*   Updated: 2022/10/10 14:21:03 by lsohler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isalnum(int C)
{
	if (C >= '0' && C <= '9')
		return (1);
	else if (C >= 'A' && C <= 'Z')
		return (1);
	else if (C >= 'a' && C <= 'z')
		return (1);
	else
		return (0);
}

int main (int argc, char **argv)
{
	(void) argc;
	printf("%d", ft_isalnum(argv[1][0]));
}
