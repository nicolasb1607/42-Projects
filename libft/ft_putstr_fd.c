/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 13:43:45 by nburat-d          #+#    #+#             */
/*   Updated: 2021/10/28 15:03:49 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

/* Écrit la chaine de caractères ’s’ sur le file
descriptor donné.

#1. La chaine de caractères à écrire.
#2. Le file descriptor sur lequel écrire */
void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = -1;
	while (s[++i])
		ft_putchar_fd(s[i], fd);
}

/*
int main()
{
	char *s ="hello";
	int fd = 1;

	ft_putstr_fd(s, fd);
	return 0; 
} */