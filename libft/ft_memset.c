/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 17:04:21 by moruiz-s          #+#    #+#             */
/*   Updated: 2023/05/09 12:52:02 by moruiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*dest;

	i = 0;
	dest = str;
	while (i < n)
	{
		dest[i] = c;
		i++;
	}
	return (str);
}

/* int	main(void)
{
	char	str[20] = "Esta es una función";
	char	str2[20] = "Esta es una función";
	
	printf("%s \n", memset(str, '$', 4));
	printf("%s \n", ft_memset(str2, '$', 4));
	return (0);
} */
