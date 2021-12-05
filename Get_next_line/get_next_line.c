/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 18:54:35 by nburat-d          #+#    #+#             */
/*   Updated: 2021/12/03 20:55:17 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include <stdio.h>

/*segfault*/
static char *get_line(char *tabfdline)
{
	int len;
	char *line;
	int i;

	i = 0;
	len = 0;
	if (!tabfdline)
		return (NULL);
	if (ft_strchr(tabfdline, '\n'))
	{
		while (tabfdline[len] != '\n')
			len++;
	}
	else
		len = ft_strlen(tabfdline);
	printf("valeur de len : %d\n", len);
	line = malloc((len + 2) * sizeof(char));
	if (!line)
		return (NULL);
	while (tabfdline[i])
	{
		line[i] = tabfdline[i];
	}
	line[i] = '\0';
	printf("sortie du get_line : %s", line);
	return (line);
}

static char *not_read_yet(char *lineread, char *tabfdline)
{
	int len;
	int i;

	i = -1;
	len = 0;
	if (!tabfdline || !lineread)
		return (NULL);
	while (lineread[len] != '\n' && lineread[len] != EOF)
		len++;
	while (++i <= len)
		tabfdline++;
	return (ft_strdup(tabfdline));
}

static char *read_store(char *lineread, int fd)
{
	char *buf;
	int bytesread;

	bytesread = 1;
	buf = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buf)
		return (NULL);
	while (!ft_strchr(buf, '\n') && bytesread > 0)
	{
		bytesread = read(fd, buf, BUFFER_SIZE);
		printf("bytesread : %d\n", bytesread);
		if (bytesread == -1)
			return (NULL);
		buf[bytesread] = '\0';
		lineread = ft_strjoin(lineread, buf);
	}
	printf("Sortie read_store : %s\n", lineread);
	printf("len lineread read_store : %ld\n", ft_strlen(lineread));
	return (lineread);
}

char *get_next_line(int fd)
{
	static char *tabfdline[1024];
	char *lineread;

	if (fd < 0)
		return (NULL);
	if (tabfdline[fd] && ft_strchr(tabfdline[fd], '\n'))
	{
		printf("non null string\n");
		lineread = get_line(tabfdline[fd]);
		tabfdline[fd] = not_read_yet(lineread, tabfdline[fd]);
		return (lineread);
	}
	tabfdline[fd] = read_store(tabfdline[fd], fd);

	lineread = get_line(tabfdline[fd]);
	tabfdline[fd] = not_read_yet(lineread, tabfdline[fd]);
	return (lineread);
}

#include <fcntl.h>

int main()
{
	int fd;
	char *str;
	int i;

	i = 1;
	fd = open("./lyrics.txt", O_RDONLY);
	do
	{
		str = get_next_line(fd);
		i++;
	} while (str);

	return (0);
}