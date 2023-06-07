/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:56:49 by moruiz-s          #+#    #+#             */
/*   Updated: 2023/06/06 10:59:25 by moruiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!src && !dst)
		return (NULL);
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}

/* int	main(void)
{
	char	s1[10] = "hola Mundo";
	char	s2[5] = "adios";
	size_t	len;

	len = 4;
	ft_memcpy(s1, s2, len);
	write(1, s1, 10);
	printf("\n");
	return (0);
} */
