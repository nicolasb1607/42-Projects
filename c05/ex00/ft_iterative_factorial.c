/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 12:08:29 by nburat-d          #+#    #+#             */
/*   Updated: 2021/08/16 12:12:33 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	resultat;

	resultat = 1;
	if (nb <= 0)
		return (1);
	while (nb > 1)
	{
		resultat = resultat * nb;
		nb--;
	}
	return (resultat);
}
