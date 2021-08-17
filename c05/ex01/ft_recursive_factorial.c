/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 14:13:58 by nburat-d          #+#    #+#             */
/*   Updated: 2021/08/16 14:14:04 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_factorial(int nb)
{
	int	resultat;

	resultat = nb;
	if (nb == 0)
		return (1);
	else
		return (resultat * ft_recursive_factorial(resultat - 1));
}
