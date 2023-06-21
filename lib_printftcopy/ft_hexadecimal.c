/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 16:15:36 by moruiz-s          #+#    #+#             */
/*   Updated: 2023/06/21 17:17:22 by moruiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexadecimal(unsigned long long n, char c)
{
	unsigned int	i;

	i = 0;
	if (n < 16)
	{
		if (c == 'x')
			i += ft_printchr("0123456789abcdef"[n % 16]);
		else
			i += ft_printchr("0123456789ABCDEF"[n % 16]);
	}
	else
	{
		i += ft_hexadecimal(n / 16, c);
		if (c == 'x')
			i += ft_printchr("0123456789abcdef"[n % 16]);
		else
			i += ft_printchr("0123456789ABCDEF"[n % 16]);
	}
	return (i);
}
/* int main ()
{
	int n;
	char	c;
	int len_n;

	n = 500;
	c = 'x';
	len_n = ft_hexadecimal(n, c);
	//printf("\n el número de digitos es: %u", len_n);
	return (0);
} */