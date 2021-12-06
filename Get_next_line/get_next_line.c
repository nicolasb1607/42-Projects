/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 17:15:52 by nburat-d          #+#    #+#             */
/*   Updated: 2021/12/06 17:56:23 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include <stdio.h>

char *get_line(char *save, char *line)
{
	int i;
	char *tmp;

	i = 0;
	if (ft_strlen(save) == 0)
		return (NULL);
	if (!ft_strchr(save, '\n'))
		while (save[i])
			i++;
	else
		while (save[i] != '\n')
			i++;
	line = malloc((i + 2) * sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	if (!ft_strchr(save, '\n'))
	{
		while (save[i])
		{
			line[i] = save[i];
			i++;
		}
	}
	else
	{
		while (save[i] != '\n')
		{
			line[i] = save[i];
			i++;
		}
	}
	if (save[i] == '\n')
	{
		line[i] = '\n';
		i++;
	}
	line[i] = '\0';
	return (line);
}

char *not_read_yet(char *save)
{
	char *tmp;
	int i;
	int j;

	i = 0;
	j = 0;
	if (ft_strlen(save) == 0)
	{
		free(save);
		return (NULL);
	}
	while (save[i] != '\n' && save[i])
		i++;
	tmp = malloc(sizeof(char) * (ft_strlen(save) - i + 1));
	if (!tmp)
		return (NULL);
	i = i + 1;
	while (save[i])
	{
		tmp[j] = save[i];
		i++;
		j++;
	}
	tmp[j] = '\0';
	free(save);
	save = tmp;
	return (save);
}

char *read_save(char *save, int fd)
{
	char buff[BUFFER_SIZE + 1];
	int bytesread;
	char *tmp;

	if (!save)
		save = ft_strdup("");
	bytesread = 1;
	while (!ft_strchr(save, '\n') && bytesread > 0)
	{
		bytesread = read(fd, buff, BUFFER_SIZE);
		if (bytesread == 0)
			break;
		if (bytesread == -1)
			return (NULL);
		buff[bytesread] = '\0';
		tmp = ft_strjoin(save, buff);
		free(save);
		save = tmp;
	}
	return (save);
}

char *get_next_line(int fd)
{
	static char *save[1024];
	char *line;

	if (ft_strchr(save[fd], '\n'))
	{
		line = get_line(save[fd], line);
		save[fd] = not_read_yet(save[fd]);
		return (line);
	}
	save[fd] = read_save(save[fd], fd);
	line = get_line(save[fd], line);
	save[fd] = not_read_yet(save[fd]);
	return (line);
}

#include <fcntl.h>

int main()
{
	int fd;
	char *str;
	int i = 1;
	
	fd = open("./lyrics.txt", O_RDONLY);
	do
	{
		str = get_next_line(fd);
		if (str)
		{
			printf("ligne %d : %s", i, str);
			free(str);
			i++;
		}
	} while (str);
	return (0);
}
