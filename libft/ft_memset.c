/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 17:04:21 by moruiz-s          #+#    #+#             */
/*   Updated: 2023/05/15 13:54:15 by moruiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include<stdio.h>

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n)
	{
		((char *) str)[i] = (unsigned char) c;
		i++;
	}
	return (str);
}

/* int	main(void)
{
	char	s[10] = "hola mundo";
	int		c;
	size_t	n;

	c = 'z';
	n = 3;
	printf("%s\n", ft_memset(s, c, n));
	printf("%s\n", memset(s, c, n));
	return (0);
} */
