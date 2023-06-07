/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:35:48 by moruiz-s          #+#    #+#             */
/*   Updated: 2023/06/06 11:48:44 by moruiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	copy_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	copy_len = dstsize - dst_len - 1;
	if (dstsize <= dst_len)
		return (src_len + dstsize);
	if (copy_len > src_len)
		copy_len = src_len;
	ft_memcpy(dst + dst_len, src, copy_len);
	dst[dst_len + copy_len] = '\0';
	return (dst_len + src_len);
}

/* int	main(void)
{
	char	dst0[10] = "adios";
	char	dst1[5];
	char	*src0;
	size_t	ret0;
	size_t	ret1;

	dst_t0 = ft_strlen(dst0);
	dst_t1 = ft_strlen(dst1);
	src0 = "hola mundo de nuevo!!!";
	ret0 = ft_strlcat(dst0, src0, sizeof(dst0));
	printf("dst0 concatenado: %s\n", dst0);
	printf("devuelve %zu", ret0);
	ret1 = ft_strlcat(dst1, src0, sizeof(dst1));
	printf("dst1 concatenado %s\n", dst1);
	printf("devuelve %zu", ret1);
	return (0);
} */
