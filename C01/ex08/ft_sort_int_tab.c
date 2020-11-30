/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliens <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 21:19:55 by aliens            #+#    #+#             */
/*   Updated: 2020/09/14 10:30:48 by aliens           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int keep_int;
	int a;
	int i;

	a = 0;
	while (a < size)
	{
		i = 0;
		while (i < size)
		{
			if (*(tab + i) > *(tab + i + 1))
			{
				keep_int = *(tab + i);
				*(tab + i) = *(tab + i + 1);
				*(tab + i + 1) = keep_int;
			}
			i++;
		}
		a++;
	}
}
