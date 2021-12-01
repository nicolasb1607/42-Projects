/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 18:54:35 by nburat-d          #+#    #+#             */
/*   Updated: 2021/12/01 11:18:04 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_line(char *tabfdline)
{   
    int  len; 
    char *line;
    int i;

    i = -1;
    if (!tabfdline)
        return (NULL);
    while (tabfdline[len] != '\n' && tabfdline[len] != NULL)
        len++;
    line = malloc ((len + 1) * sizeof(char);
    if (!line)
        return (NULL);
    while (tabfdline[++i] != '\n' && tabfdline[i] != NULL)
       line[i] = tabfdline[i];
    line[i] = '\0';  
    return (line);
}

char *read_store(char *tabfdline, int fd)
{
    char    *buf;
    int     bytesread;

    buf = malloc ((BUFFER_SIZE + 1) * sizeof(char);
    while (ft_strchr(tabfdline, '\n') == 0 && bytesread > 0)
    {
        bytesread = read(fd, buf, BUFFER_SIZE);
        if (bytesread = -1)
            return (NULL);        
        buf[BUFFER_SIZE] = '\0';
        tabfdline = ft_strjoin(tabfdline, buf);
    }
    return (tabfdline);
    
}

char    *get_next_line(int fd)
{
    static char **tabfdline[1024];
    char *lineread;

    if(fd < 0)
        return (NULL);
    if (tab[fd] == NULL)
        lineread = get_line(&tabfdline[fd]);
    read_store(&tabfdline[fd], fd);

    return (lineread);
    

    
}
