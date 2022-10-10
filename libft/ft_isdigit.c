/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsohler <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:21:08 by lsohler           #+#    #+#             */
/*   Updated: 2022/10/10 14:20:39 by lsohler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(int C)
{
	if (C >= '0' & C <= '9')
		return (1);
	else
		return (0);
}

int main(int argc, char **argv)
{
	(void)argc;
	printf("%d", ft_isdigit(argv[1][0]));
}
