/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliens <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 18:14:51 by aliens            #+#    #+#             */
/*   Updated: 2020/09/17 18:36:53 by aliens           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int a;

	if (nb < 0)
	{
		a = -nb;
		ft_putchar('-');
	}
	else
	{
		a = nb;
	}
	if (a > 9)
	{
		ft_putnbr(a / 10);
	}
	ft_putchar('0' + a % 10);
}
