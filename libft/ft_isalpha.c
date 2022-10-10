/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsohler <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:51:08 by lsohler           #+#    #+#             */
/*   Updated: 2022/10/10 14:20:12 by lsohler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_isalpha(int C)
{
	if (C >= 'a' & C <= 'z')
		return (1);
	else if (C >= 'A' & C <= 'Z')
		return (1);
	else
		return (0);
}
/*
int main()
{
	printf("%d", ft_isalpha('A'));
	printf("%d", ft_isalpha('B'));
	printf("%d", ft_isalpha('C'));
	printf("%d", ft_isalpha('4'));
}
*/
