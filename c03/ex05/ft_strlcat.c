/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 09:13:33 by nburat-d          #+#    #+#             */
/*   Updated: 2021/08/11 09:14:19 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	j;

	j = 0;
	dest_len = ft_strlen(dest);
	if (dest_len < size)
	{
		while (src[j] && (j + dest_len) < size)
		{
			dest[dest_len + j] = src[j];
			j++;
		}
		if (j + dest_len == size)
			dest[dest_len + j - 1] = '\0';
		else
			dest[dest_len + j] = '\0';
	}
	else
		dest_len = size;
	return (dest_len + ft_strlen(src));
}
