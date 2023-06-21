/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 16:06:41 by moruiz-s          #+#    #+#             */
/*   Updated: 2023/06/21 15:57:47 by moruiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_decimal(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		ft_printchr('-');
		n *= (-1);
		i++;
	}
	if (n <= 9)
	{
		ft_printchr(n + '0');
		i++;
	}
	else
	{
		i++;
		i += ft_decimal(n / 10);
		ft_printchr(n % 10 + '0');
	}
	return (i);
}

/* int main()
{
	int	n;
	int	len_n;

	n = -625;
	len_n = ft_decimal(n);
	printf("/n el número de digitos es: %d", len_n);
}
 */