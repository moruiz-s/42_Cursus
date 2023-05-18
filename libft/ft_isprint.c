/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 11:01:39 by moruiz-s          #+#    #+#             */
/*   Updated: 2023/05/15 12:53:49 by moruiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h>
#include <ctype.h> */

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	else
		return (0);
}

/* int	main(void)
{
	int	j;
	int	i;

	j = 126;
	i = 3;
	printf(" esta función devuelve %d \n", ft_isprint(i));
	printf("función original devuelve %d \n", ft_isprint(j));
	printf(" esta función devuelve %d \n", isprint(i));
	printf("función original devuelve %d", isprint(j));
	return (0);
} */
