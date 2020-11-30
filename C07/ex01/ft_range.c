/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliens <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 09:56:31 by aliens            #+#    #+#             */
/*   Updated: 2020/09/24 15:10:58 by aliens           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *tab;

	if (max <= min)
		return (NULL);
	max -= min;
	if (!(tab = malloc(sizeof(tab) * max)))
		return (NULL);
	i = -1;
	while (++i < max)
		tab[i] = min + i;
	return (tab);
}
