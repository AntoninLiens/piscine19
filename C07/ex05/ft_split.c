/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliens <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 13:03:57 by aliens            #+#    #+#             */
/*   Updated: 2020/09/30 15:50:27 by aliens           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_charset(char str, char *charset)
{
	int i;

	i = -1;
	while (charset[++i])
		if (charset[i] == str)
			return (1);
	return (0);
}

int		ft_strlen_malloc(char *str, char *charset)
{
	int i;
	int words;

	i = 0;
	words = 0;
	while (str[i])
	{
		while (str[i] && ft_charset(str[i], charset))
			i++;
		if (str[i])
			words++;
		while (str[i] && !ft_charset(str[i], charset))
			i++;
	}
	printf("WORDS : %d\n", words);
	return (words);
}

int		ft_size_word(char *str, char *charset)
{
	int w_size;

	w_size = 0;
	while (str[w_size] && !ft_charset(str[w_size], charset))
		w_size++;
	printf("%d\n", w_size);
	return (w_size);
}

char	*ft_str_duper(char *str, int w_size)
{
	char	*tab1;
	int		i;

	i = 0;
	if (!(tab1 = malloc(sizeof(char) * (w_size + 1))))
		return (NULL);
	while (str[i] && i < w_size)
	{
		tab1[i] = str[i];
		i++;
	}
	tab1[i] = 0;
	return (tab1);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		s1;
	int		s2;

	s1 = ft_strlen_malloc(str, charset);
	if (!(tab = malloc(sizeof(char*) * (s1 + 1))))
		return (NULL);
	i = -1;
	while (++i < s1)
	{
		while (*str && ft_charset(*str, charset))
			str++;
		s2 = ft_size_word(str, charset);
		if (!(tab[i] = ft_str_duper(str, s2)))
			return (NULL);
		str += s2;
	}
	tab[s1] = 0;
	return (tab);
}
