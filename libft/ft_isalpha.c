/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:40:02 by moruiz-s          #+#    #+#             */
/*   Updated: 2023/06/06 10:48:42 by moruiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <ctype.h>

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/* int	main(void)
{
	int	i;
	int j;

	i = '0';
	j = 'z';
	printf("la función nos da %d \n", ft_isalpha(i));
	printf("la función nos da %d \n", ft_isalpha(j));
	printf("la función nos da %d", isalpha(i));
	printf("la función nos da %d", isalpha(j));
	return (0);
} */