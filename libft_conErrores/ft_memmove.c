/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:25:10 by moruiz-s          #+#    #+#             */
/*   Updated: 2023/05/16 15:46:12 by moruiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	
	i = 0;
	if (dst > src)
	{
		while (n > 0)
		{
			((char *)dst)[n - 1] = ((char *)src)[n - 1];
			n--;
		}
	}
	else if (src > dst)
	{
		while (i < n)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dst);
}

/* int main(void)
{
	char	s1[8] = "una ruta";
	char	s2[15] = "caganet catalan";
	size_t	len;

	len = 10;
	ft_memmove(s1, s2, len);
	write(1, s1, 20);
	printf("\n");
	memmove(s1, s2, len);
	write(1, s1, 20);
	return (0);
} */
 