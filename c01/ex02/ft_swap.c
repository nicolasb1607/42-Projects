/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 19:09:36 by nburat-d          #+#    #+#             */
/*   Updated: 2021/08/05 20:16:27 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{
	int	valptr1;
	int	valptr2;

	valptr1 = *a;
	valptr2 = *b;
	*a = valptr2;
	*b = valptr1;
}
