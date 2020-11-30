/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliens <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 19:54:55 by aliens            #+#    #+#             */
/*   Updated: 2020/09/23 09:35:59 by aliens           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;
	int a;

	a = 0;
	(void)argc;
	while (argv[++a])
	{
		i = -1;
		while (argv[a][++i])
			ft_putchar(argv[a][i]);
		ft_putchar('\n');
	}
	return (0);
}
