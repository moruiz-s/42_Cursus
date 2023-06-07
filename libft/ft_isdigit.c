/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 12:49:12 by moruiz-s          #+#    #+#             */
/*   Updated: 2023/06/05 17:22:05 by moruiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <ctype.h> 

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/* int	main(void)
{
	int	i;
	int	j;

	i = '7';
	j = 'z';
	printf(" la función ft_isdigit devuelve %d \n", ft_isdigit(i));
	printf("función original devuelve %d \n", isdigit(i));
	printf(" esta función devuelve %d \n", ft_isdigit(j));
	printf("función original devuelve %d", isdigit(j));
	return (0);
} */
