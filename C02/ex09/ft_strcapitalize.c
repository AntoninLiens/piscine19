/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliens <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 12:43:18 by aliens            #+#    #+#             */
/*   Updated: 2020/09/17 11:43:30 by aliens           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_char_is_alphanumeric(char c)
{
	if ((c >= '0' && c <= '9') || \
			(c >= 'A' && c <= 'Z') || \
			(c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}

void	ft_maj_min_change(int b2o, char *str, int i)
{
	if (b2o)
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
		{
			*(str + i) -= 32;
		}
	}
	else
	{
		if (*(str + i) >= 'A' && *(str + i) <= 'Z')
		{
			*(str + i) += 32;
		}
	}
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int b2o;

	i = 0;
	while (*(str + i))
	{
		b2o = 1;
		while (ft_char_is_alphanumeric(*(str + i)))
		{
			ft_maj_min_change(b2o, str, i);
			i++;
			b2o = 0;
		}
		if (b2o)
		{
			i++;
		}
	}
	return (str);
}
