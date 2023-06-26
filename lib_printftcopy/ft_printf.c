/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:50:19 by moruiz-s          #+#    #+#             */
/*   Updated: 2023/06/26 16:39:35 by moruiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "string.h"

int	ft_selectargs(va_list args, const char c)
{
	int	len_ar;

	len_ar = 0;
	if (c == 'c')
		len_ar += ft_printchr(va_arg(args, int));
	else if (c == 's')
		len_ar += ft_printstr(va_arg(args, char *));
	else if (c == 'i' || c == 'd')
		len_ar += ft_decimal(va_arg(args, int));
	else if (c == 'u')
		len_ar += ft_decimal_us(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		len_ar += ft_hexadecimal(va_arg(args, unsigned int), c);
	else if (c == 'p')
		len_ar += ft_printpointer((unsigned long)va_arg(args, void *));
	else if (c == '%')
		len_ar += ft_printchr('%');
	return (len_ar);
}

int	ft_printf(char const *str, ...)
{
	int		i;
	int		len;
	va_list	args;

	va_start(args, str);
	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			len += ft_selectargs(args, str[i + 1]);
			i++;
		}
		else
			len += ft_printchr(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}

/* int	main(void)
{
	char	*s;
	int		count1;
	int		c;
	int		count2;

	s = "HOLA MUNDO";
	c = 'O';
	count1 = printf("la función printf devuelve %d \n", count1);
	printf("la función ft_printf retorna %d\n", count1);
	count2 = ft_printf("la función ft_print devuelve %d \n", count2);
	printf("la función printf retorna %d\n", count2);
	return (0);
} */
