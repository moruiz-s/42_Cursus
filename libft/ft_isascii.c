/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 12:43:00 by moruiz-s          #+#    #+#             */
/*   Updated: 2023/05/15 12:35:09 by moruiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h>
#include <ctype.h> */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/* int	main(void)
{
	int	j;
	int	i;

	j = 128;
	i = 3;
	printf(" esta función devuelve %d \n", ft_isascii(i));
	printf("función original devuelve %d \n", ft_isascii(j));
	printf(" esta función devuelve %d \n", isascii(i));
	printf("función original devuelve %d", isascii(j));
	return (0);
} */
