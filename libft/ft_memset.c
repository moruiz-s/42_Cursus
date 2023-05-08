/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 17:04:21 by moruiz-s          #+#    #+#             */
/*   Updated: 2023/05/08 17:38:23 by moruiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include<stdio.h>

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*dest;

	i = 0;
	dest = str;
	while (i < n)
	{
		dest[i] = (char)c;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	*str;

	str = "Esta es una función";
	printf("String original:	%c\n", str[1]);
	memset(str + 5, '$', 4);
	printf("Función propia: %c%s\n", str[5], str + 6);
	return (0);
}*/
