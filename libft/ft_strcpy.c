/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 18:10:11 by nburat-d          #+#    #+#             */
/*   Updated: 2021/11/24 16:41:18 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The  strcpy()  function  copies the string pointed to by src, including 
the terminating null byte ('\0'), to the buffer  pointed  to  by  dest.
The  strings  may  not overlap, and the destination string dest must be 
large enough to receive the copy.  Beware  of  buffer  overruns! */
char *ft_strcpy(char *dst, char *src)
{
	int i; 
	i = -1; 
	while (src[++i])
		dst[i] = src[i];
	dst[i] = '\0';
	return(dst);
}