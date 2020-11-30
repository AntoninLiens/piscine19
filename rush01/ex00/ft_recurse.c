/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recurse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliens <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 22:44:52 by aliens            #+#    #+#             */
/*   Updated: 2020/09/22 14:25:51 by aliens           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_tab(int grid[4][4]);
int		ft_total_check(int grid[4][4], char arg[16]);

int		ft_nb_on_row(int x, int nb, int grid[4][4])
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (grid[i][x] == nb)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int		ft_nb_on_col(int y, int nb, int grid[4][4])
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (grid[y][i] == nb)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int		ft_recurse(int grid[4][4], char arg[16])
{
	int x;
	int y;
	int nb;

	y = -1;
	while (++y < 4)
	{
		x = -1;
		while (++x < 4)
			if (grid[y][x] == 0)
			{
				nb = 0;
				while (++nb <= 4)
					if (ft_nb_on_row(x, nb, grid) && ft_nb_on_col(y, nb, grid))
					{
						grid[y][x] = nb;
						ft_recurse(grid, arg);
						grid[y][x] = 0;
					}
				return (1000);
			}
	}
	if (ft_total_check(grid, arg))
		ft_print_tab(grid);
	return (1000);
}
