/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsohler <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:50:05 by lsohler           #+#    #+#             */
/*   Updated: 2022/10/10 17:16:18 by lsohler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;

	char temp[len];

	i = 0;
	while (i < len)
	{
		temp[i] = *(unsigned char *)(src + i);
		*(unsigned char *)(dst + i) = temp[i];
		i++;
	}
	return (dst);
}
int main()
{
	char str1[] = "Salut
