/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:38:39 by nburat-d          #+#    #+#             */
/*   Updated: 2021/11/30 13:35:11 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	pos;

	pos = 0;
	if (ft_isascii(c) == 0)
		return ((char *) &s[pos]);
	while (s[pos] != c && s[pos])
		pos++;
	if (s[pos] == c)
		return ((char *) &s[pos]);
	else
		return (NULL);
}
