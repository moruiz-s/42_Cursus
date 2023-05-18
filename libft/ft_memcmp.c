/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 16:09:44 by moruiz-s          #+#    #+#             */
/*   Updated: 2023/05/17 15:51:02 by moruiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n && str1[i] == str2[i])
	{
		if (str1[i] == !0)
			return (0);
		i++;
	}
	if (i == n)
		return (0);
	return (str1[i] - str2[i]);
}
/* int main(void)
{
	char	*s1;
	char	*s2;
	size_t	i;

	s1 = "un en pais multicolor";
	s2 = "en un pais diferente";
	i = 10;
	printf("la función ft nos da %d\n", ft_memcmp(s1, s2, i));
	printf("la función ft nos da %d\n", memcmp(s1, s2, i));
	return (0);
} */