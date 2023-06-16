/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal_us.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 16:46:29 by moruiz-s          #+#    #+#             */
/*   Updated: 2023/06/16 16:54:42 by moruiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_decimal_us(unsigned int n)
{
	int i;

	i = 0;
	if (n <= 9)
	{
		ft_printchr(n + '0');
		i++;
	}
	else
	{
		i++;
		i += ft_decimal_us(n / 10);
		ft_printchr(n % 10 + '0');
	}
	return (i);
}

int main ()
{
	int n;
	int len_n;

	n = 625;
	len_n = ft_decimal_us(n);
	printf("\n el número de digitos es: %u", len_n);
	return (0);
}
