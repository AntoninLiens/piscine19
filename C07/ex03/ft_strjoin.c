/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliens <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 15:51:44 by aliens            #+#    #+#             */
/*   Updated: 2020/10/01 13:00:21 by aliens           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

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
	return (dest);
}

int		ft_strlenstrlen(char **strs, char *sep, int size)
{
	int i;
	int a;
	int b;

	i = 0;
	while (sep[i])
		i++;
	i *= size - 1;
	a = -1;
	while (++a < size)
	{
		b = -1;
		while (strs[a][++b])
			i++;
	}
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		s;

	s = ft_strlenstrlen(strs, sep, size);
	printf("taille de la cahine tot : %d\n", s);
	if (!(str = malloc(sizeof(char) * (s + 1))))
		return (NULL);
	i = -1;
	while (++i < size)
	{
		printf("mots : %d\n", i);
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
	}
	return (str);
}

#include <stdio.h>
int		main(int argc, char **argv)
{
	char *sep = "+-+";
	char *dest;

	if (!(dest = ft_strjoin(argc, argv, sep)))
		return (0);
	printf("%s\n", dest);
	return (0);
}
