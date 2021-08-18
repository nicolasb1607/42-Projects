/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 08:35:44 by nburat-d          #+#    #+#             */
/*   Updated: 2021/08/18 08:36:11 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	len;

	len = 0;
	while (src[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	int		length;
	char	*ptrn_src;
	int		i;

	i = 0;
	length = 0;
	length = ft_strlen(src);
	ptrn_src = malloc((length + 1) * sizeof (char));
	if (!ptrn_src)
		return (NULL);
	while (src[i])
	{
		ptrn_src[i] = src[i];
		i++;
	}
	ptrn_src[i] = '\0';
	return (ptrn_src);
}
