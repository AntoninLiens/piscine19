/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliens <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 21:00:08 by aliens            #+#    #+#             */
/*   Updated: 2020/09/20 21:27:48 by aliens           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_recurse(int grid[4][4], char arg[16]);

int		main(int argc, char **argv)
{
	int		i;
	int		y;
	int		x;
	int		grid[4][4];
	char	arg[16];

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	i = 0;
	while (i < 31)
	{
		if (argv[1][i] == ' ')
		{
			i++;
		}
		else
		{
			arg[i / 2] = argv[1][i];
			i++;
		}
	}
	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			grid[y][x] = 0;
			x++;
		}
		y++;
	}
	ft_recurse(grid, arg);
	return (0);
}
