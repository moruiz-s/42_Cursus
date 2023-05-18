/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 12:49:12 by moruiz-s          #+#    #+#             */
/*   Updated: 2023/05/15 11:58:46 by moruiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h>
#include <ctype.h> */

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
	printf(" esta función devuelve %d \n", ft_isdigit(i));
	printf("función original devuelve %d \n", ft_isdigit(j));
	printf(" esta función devuelve %d \n", isdigit(i));
	printf("función original devuelve %d", isdigit(j));
	return (0);
}
 */