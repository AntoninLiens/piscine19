/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliens <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 15:28:59 by aliens            #+#    #+#             */
/*   Updated: 2020/09/16 16:37:01 by aliens           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int a;

	i = 0;
	a = 0;
	while (*(dest + i))
	{
		i++;
	}
	while (*(src + a))
	{
		*(dest + i + a) = *(src + a);
		a++;
	}
	*(dest + i + a) = '\0';
	return (dest);
}