/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 17:23:50 by moruiz-s          #+#    #+#             */
/*   Updated: 2023/06/21 17:43:20 by moruiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printpointer(unsigned long long n)
{
	unsigned int	i;

	i = ft_printstr("0x");
	i += ft_hexadecimal(n, 'x');
	return (i);
}

/* int main ()
{
	int n;
	char	c;
	int len_n;

	n = 500;
	c = 'x';
	len_n = ft_printpointer(n);
	//printf("\n el número de digitos es: %u", len_n);
	return (0);
} */