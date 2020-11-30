/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliens <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 16:39:11 by aliens            #+#    #+#             */
/*   Updated: 2020/09/17 16:42:23 by aliens           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int a;

	i = 0;
	a = 0;
	while (*(dest + i))
	{
		i++;
	}
	while (*(src + a) && a < nb)
	{
		*(dest + i + a) = *(src + a);
		a++;
	}
	*(dest + i + a) = '\0';
	return (dest);
}
