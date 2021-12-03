/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 18:54:35 by nburat-d          #+#    #+#             */
/*   Updated: 2021/12/03 08:46:32 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include <stdio.h>

static char *get_line(char *tabfdline)
{   
	int  len; 
	char *line;
	int		i;

	i = -1;
	len = 0;
	if (!tabfdline)
		return (NULL);
	while (tabfdline[len] != '\n' && tabfdline[len] != EOF)
		len++;
	line = malloc ((len + 2) * sizeof(char));
	if (!line)
		return (NULL);
	while (tabfdline[i] != '\n' && tabfdline[i] != EOF)
	{
		line[i] = tabfdline[i];
		i++;
	}
	if(tabfdline[i] != EOF)
	{
		line[i] = '\n';
		i++;
	}
	line[i] = '\0';  
	return (line);
}
/*does not work well */
static char *not_read_yet(char *lineread, char *tabfdline)
{
	int  len;
	int		i;

	i = -1;
	len = 0;
	if (!tabfdline || !lineread)
		return (NULL);
	while (lineread[len] != '\n' && lineread[len] != EOF)
		len++;
	while (++i <= len)
		tabfdline++;
	return(ft_strdup(tabfdline));
}

static char *read_store(char *lineread, int fd)
{
	char    *buf;
	int     bytesread;

	bytesread = 1;
	buf = malloc ((BUFFER_SIZE + 1) * sizeof(char));
	if (!buf)
		return (NULL);
	while (!ft_strchr(buf, '\n') && bytesread > 0)
	{
		bytesread = read(fd, buf, BUFFER_SIZE);
		if (bytesread == -1 || bytesread == 0)
			return (NULL);
		buf[BUFFER_SIZE] = '\0';
		lineread = ft_strjoin(lineread, buf);
	}

	return (lineread);
}

char    *get_next_line(int fd)
{
	static char *tabfdline[1024];
	char *lineread;

	if(fd < 0)
		return (NULL);
	if (tabfdline[fd] != NULL && ft_strchr(tabfdline[fd], '\n'))
	{
			lineread = get_line(tabfdline[fd]);
			printf("non null string\n");
			tabfdline[fd] = not_read_yet(lineread, tabfdline[fd]);
			return(lineread);
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
	
	fd = open("./bible.txt", O_RDONLY);
	do
	{
		str = get_next_line(fd);
		printf("%s", str);
	}while (str);
	
	return (0);
}