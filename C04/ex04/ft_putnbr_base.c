/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliens <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 11:32:16 by aliens            #+#    #+#             */
/*   Updated: 2020/09/24 09:22:15 by aliens           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_check_nbrbase(char c, char *base)
{
	int i;

	i = -1;
	while (base[++i])
		if (c == base[i])
			return (1);
	return (0);
}

void	ft_print_nbrbase(long int nbr, char *base, int i)
{
	if (nbr > i - 1)
	{
		ft_print_nbrbase(nbr / i, base, i);
		nbr %= i;
	}
	ft_putchar(base[nbr]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int i;

	i = -1;
	while (base[++i])
		if (base[i] == '-' || base[i] == '+' ||
				base[i] == ' ' || (base[i] >= 9 && base[i] <= 13) ||
				ft_check_nbrbase(base[i], base + i + 1))
			return ;
	if (i < 2)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		ft_print_nbrbase(-nbr, base, i);
	}
	else
		ft_print_nbrbase(nbr, base, i);
}
