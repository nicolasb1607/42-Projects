/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 09:35:12 by nburat-d          #+#    #+#             */
/*   Updated: 2021/08/11 09:35:43 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;
	unsigned int	x;

	i = 0;
	while ((unsigned char)s1[i] == (unsigned char)s2[i])
		i++;
	x = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (x);
}
