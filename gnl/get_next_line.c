/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsohler <lsohler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:19:47 by lsohler           #+#    #+#             */
/*   Updated: 2022/11/03 14:01:12 by lsohler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
//#include <string.h>
#include <stdio.h>
//#include <stdlib.h>
//#include <unistd.h>
#include <fcntl.h>
/*
char	*get_next_line(int fd)
{
	static char	*stash;
	char		*buffer;
	int		i;
}
*/

char	*ft_read_to_stash(char *stash, int fd)
{
	char	*buffer;
	int	i;
	
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	i = 1;
	//read and add to buffer
	while (!ft_strchr(stash, '\n') && i != 0)
	{
		i = read(fd, buffer, BUFFER_SIZE);
		buffer[i] = '\0';
		stash = ft_strjoin(stash, buffer);
	}
	free(buffer);
	return (stash);
}
/*
int	ft_stash_to_nl(char *stash, int fd)
{
	if (stash[i] == '\n')
		i++;
	return (i);
}
*/
char	*get_next_line(int fd)
{
	static char	*stash = NULL;
	char		*str;


	if (fd < 0 || BUFFER_SIZE < 1 || (read(fd, str, 0) == -1))
		return (NULL);
	stash = ft_read_to_stash(stash, fd);
	if (!stash)
		return (NULL);
	return (stash);
}

int	main()
{
	int	fd;
	char	*str;

	fd = open("gnltest", O_RDONLY);
	str = get_next_line(fd);
//	printf("%s\n", str);
//	while (str != NULL)
//	{
//		printf("%s\ngnl\n", str);
//		str = get_next_line(fd);
//	}
	close(fd);
}
