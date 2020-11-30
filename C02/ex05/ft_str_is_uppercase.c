/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliens <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 11:34:51 by aliens            #+#    #+#             */
/*   Updated: 2020/09/15 11:37:24 by aliens           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (*(str + i))
	{
		if (!((*(str + i) >= 'A' && *(str + i) <= 'Z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
