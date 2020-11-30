/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfilipov <dfilipov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 11:10:07 by dfilipov          #+#    #+#             */
/*   Updated: 2020/09/13 22:19:24 by aliens           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_first_line(int c, int x)
{
	if (c == x - 1)
	{
		ft_putchar('\\');
	}
	else if (c == 0)
	{
		ft_putchar('/');
	}
	else
	{
		ft_putchar('*');
	}
}

void	print_last_line(int c, int x)
{
	if (c == x - 1)
	{
		ft_putchar('/');
	}
	else if (c == 0)
	{
		ft_putchar('\\');
	}
	else
	{
		ft_putchar('*');
	}
}

void	print_between_line(int c, int x)
{
	if (c == x - 1 || c == 0)
	{
		ft_putchar('*');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	conditions_function(int x, int y, int c, int r)
{
	if (r == 0)
	{
		print_first_line(c, x);
	}
	else if (r == y - 1)
	{
		print_last_line(c, x);
	}
	else
	{
		print_between_line(c, x);
	}
}

void	rush(int x, int y)
{
	int raw;
	int count;

	raw = 0;
	while (raw < y)
	{
		count = 0;
		while (count < x)
		{
			conditions_function(x, y, count, raw);
			count++;
		}
		ft_putchar('\n');
		raw++;
	}
}
