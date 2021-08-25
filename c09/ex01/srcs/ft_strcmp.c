/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 09:49:23 by nburat-d          #+#    #+#             */
/*   Updated: 2021/08/24 09:49:28 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	x;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	x = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (x);
}
#include <stdio.h>
#include <string.h>
int ft_strcmp(char *s1, char *s2);

int main(void)
{
	char s1[] = "Bonj";
	char s2[] = "Bon";
	int x;

	x  = ft_strcmp(s1, s2);
	printf("%d", x);
	printf("%d \n", strcmp(s1, s2));
	return (0);
}
