/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skyscraper_conditions.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliens <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 14:13:23 by aliens            #+#    #+#             */
/*   Updated: 2020/09/20 21:20:38 by aliens           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_col_up_check(int grid[4][4], int x, char carg)
{
	int y;
	int count;
	int max;

	y = -1;
	count = 0;
	max = 0;
	while (++y < 4)
	{
		if (grid[y][x] > max)
		{
			max = grid[y][x];
			count++;
		}
	}
	if (carg == '0' + count)
		return (1);
	return (0);
}

int		ft_col_down_check(int grid[4][4], int x, char carg)
{
	int y;
	int count;
	int max;

	y = 4;
	count = 0;
	max = 0;
	while (--y > 0)
	{
		if (grid[y][x] < max)
		{
			max = grid[y][x];
			count++;
		}
	}
	if (carg == '0' + count)
		return (1);
	return (0);
}

int		ft_row_left_check(int grid[4][4], int y, char carg)
{
	int x;
	int count;
	int max;

	x = -1;
	count = 0;
	max = 0;
	while (++x < 4)
	{
		if (grid[y][x] < max)
		{
			max = grid[y][x];
			count++;
		}
	}
	if (carg == '0' + count)
		return (1);
	return (0);
}

int		ft_row_right_check(int grid[4][4], int y, char carg)
{
	int x;
	int count;
	int max;

	x = 4;
	count = 0;
	max = 0;
	while (--x > 0)
	{
		if (grid[y][x] < max)
		{
			max = grid[y][x];
			count++;
		}
	}
	if (carg == '0' + count)
		return (1);
	return (0);
}

int		ft_total_check(int grid[4][4], char arg[16])
{
	int count;
	int i;

	i = -1;
	count = 0;
	while (++i < 4)
		if (ft_col_up_check(grid, i, arg[i]))
			count++;
	i--;
	while (++i < 8)
		if (ft_col_down_check(grid, i % 4, arg[i]))
			count++;
	i--;
	while (++i < 12)
		if (ft_row_left_check(grid, i % 4, arg[i]))
			count++;
	i--;
	while (++i < 16)
		if (ft_row_right_check(grid, i % 4, arg[i]))
			count++;
	if (count == 16)
		return (1);
	return (0);
}
