/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 11:20:18 by moruiz-s          #+#    #+#             */
/*   Updated: 2023/05/16 11:28:07 by moruiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	i;

	src_len = strlen(src);
	i = 0;
	if (dstsize != 0)
	{
		while (i < (dstsize - 1) && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_len);
}

/* int	main(void)
{
	char	dst0[10];
	char	dst1[10];
	char	*src1;
	size_t	len0;
	size_t	len1;

	src1 = "hola mundo!";
	printf("src es %s\n", src1);
	len0 = ft_strlcpy(dst0, src1, 10);
	printf("dst es %s\n", dst0);
	printf("devuelve %zu\n", len0);
	len1 = strlcpy(dst1, src1, 10);
	printf("dst es %s\n", dst1);
	printf("devuelve %zu", len1);
	return (0);
} */
