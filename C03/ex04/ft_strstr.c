/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliens <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 17:41:51 by aliens            #+#    #+#             */
/*   Updated: 2020/09/25 18:01:22 by aliens           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int a;

	i = 0;
	if (!*to_find)
		return (str);
	while (str[i])
	{
		if (str[i] == *to_find)
		{
			a = 0;
			while (to_find[a] == str[i + a])
			{
				if (!(to_find[a + 1]))
					return (&str[i]);
				a++;
			}
		}
		i++;
	}
	return (0);
}
