/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:32:35 by moruiz-s          #+#    #+#             */
/*   Updated: 2023/06/05 17:17:16 by moruiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <ctype.h>

int	ft_isalnum(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90) || (c >= 48 && c <= 57))
		return (1);
	else
		return (0);
}

/* int	main(void)
{
	int	i;
	int	j;

	i = ',';
	j = 'z';
	printf(" esta función ft_isalnum devuelve %d \n", ft_isalnum(i));
	printf("función original devuelve %d \n", ft_isalnum(j));
	printf(" esta función devuelve %d \n", isalnum(i));
	printf("función original devuelve %d", isalnum(j));
	return (0);
} */
