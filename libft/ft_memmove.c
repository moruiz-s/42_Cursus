/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:19:47 by moruiz-s          #+#    #+#             */
/*   Updated: 2023/06/06 11:04:00 by moruiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
/* int	main(void)
{
	char	s1[5] = "adios";
	char	s2[10] = "hola Mundo";
	size_t	len;

	len = 4;
	ft_memmove(s1, s2, len);
	write(1, s1, 10);
	printf("\n");
	return (0);
} */
