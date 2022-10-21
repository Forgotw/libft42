/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsohler <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:34:40 by lsohler           #+#    #+#             */
/*   Updated: 2022/10/21 12:34:51 by lsohler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	 ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0,
	while (s[i] != '\0')
	{
		f(i, &s[i]);
	}
}
