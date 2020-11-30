/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliens <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 18:09:37 by aliens            #+#    #+#             */
/*   Updated: 2020/09/10 22:20:48 by aliens           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	display_number(char i, char a, char b)
{
	ft_putchar(i);
	ft_putchar(a);
	ft_putchar(b);
	if (i != '7')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char i;
	char a;
	char b;

	i = '0';
	while (i <= '9')
	{
		a = i + 1;
		while (a <= '9')
		{
			b = a + 1;
			while (b <= '9')
			{
				display_number(i, a, b);
				b++;
			}
			a++;
		}
		i++;
	}
}
