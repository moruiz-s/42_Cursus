/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:58:24 by moruiz-s          #+#    #+#             */
/*   Updated: 2023/05/17 14:50:34 by moruiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	ft_atoi(const char *str)
{
	int		i;
	int		is_neg;
	int		nb;

	i = 0;
	nb = 0;
	is_neg = 1;
	while (str[i] == '\f' || str[i] == '\n' || str[i] == '\r' \
			|| str[i] == '\t' || str[i] == '\v' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{	
		if (str[i] == '-')
			is_neg = is_neg * -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return (nb * is_neg);
}

/* int	main(void)
{
	char	*str;
	int		n;

	str = "+754aa12aa3";
	n = ft_atoi(str);
	printf("la funcion ft da: %d", n);
	printf("la función original da: %d", atoi(str));
	return (0);
} */