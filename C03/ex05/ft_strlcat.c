/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliens <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 18:02:12 by aliens            #+#    #+#             */
/*   Updated: 2020/09/25 19:01:05 by aliens           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[ft_strlen(dest) + i] = src[i];
		i++;
	}
	dest[ft_strlen(dest) + i] = '\0';
	if (ft_strlen(dest) < size)
		return (ft_strlen(dest) + ft_strlen(src));
	return (ft_strlen(dest) + size);
}
