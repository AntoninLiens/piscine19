/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliens <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 14:43:34 by aliens            #+#    #+#             */
/*   Updated: 2020/09/14 16:12:47 by aliens           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int keep_int;

	keep_int = *a;
	*a = keep_int / *b;
	*b = keep_int % *b;
}