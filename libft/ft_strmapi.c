/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 12:49:20 by nburat-d          #+#    #+#             */
/*   Updated: 2021/10/26 18:06:59 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

/* Applique la fonction ’f’ à chaque caractère de la
chaine de caractères passée en argument pour créer
ne nouvelle chaine de caractères (avec malloc(3))
 résultant des applications successives de ’f’.
 
 La chaine de caractères résultant des applications
successives de f. Retourne NULL si l’allocation
échoue.

#1. La chaine de caractères sur laquelle itérer
#2. La fonction à appliquer à chaque caractère. */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	int		i;

	i = -1;
	if (s == NULL || f == NULL)
		return ((char *)s);
	else
	{
		res = malloc((ft_strlen(s) + 1) * sizeof(char));
		if (!res)
			return (NULL);
		ft_strcpy(res, (char *)s);
		while (res[++i])
			res[i] = f(i, res[i]);
	}
	return (res);
}
