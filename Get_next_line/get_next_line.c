/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 18:54:35 by nburat-d          #+#    #+#             */
/*   Updated: 2021/12/01 18:01:56 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include <stdio.h>

/*does not work */
char *get_line(char *tabfdline)
{   
    int  len; 
    char *line;
    int i;

    i = -1;
    if (!tabfdline)
        return (NULL);
    while (ft_strchr(tabfdline, '\n') && !tabfdline[len])
        len++;
    line = malloc ((len + 1) * sizeof(char));
    if (!line)
        return (NULL);
    while (tabfdline[++i] != '\n' && !tabfdline[i])
       line[i] = tabfdline[i];
    line[i] = '\0';  
    return (line);
}

char *read_store(char *lineread, int fd)
{
    char    *buf;
    int     bytesread;

    printf("J'entre dans read\n");
    buf = malloc ((BUFFER_SIZE + 1) * sizeof(char));
    if (!buf)
        return (NULL);
    while (!ft_strchr(buf, '\n'))
    {
        bytesread = read(fd, buf, BUFFER_SIZE);      
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
    if (lineread != NULL)
        lineread = get_line(tabfdline[fd]);
    lineread = read_store(tabfdline[fd], fd);
    lineread = get_line(tabfdline[fd]);
    return (lineread);   
}


#include <fcntl.h>

int main()
{
    int fd;
    
    fd = open("./lyrics.txt", O_RDONLY);
    printf("%s\n", get_next_line(fd));
    return (0);
}