/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:35:48 by moruiz-s          #+#    #+#             */
/*   Updated: 2023/05/16 13:27:35 by moruiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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
	char	dst0[10];
	char	dst1[5];
	char	*src0;
	size_t	ret0;
	size_t	ret1;

	src0 = "hola mundo de nuevo!!!";
	ret0 = ft_strlcat(dst0, src0, sizeof(dst0));
	printf("dst de ft_ es %s\n", dst0);
	ret1 = strlcat(dst1, src0, sizeof(dst1));
	printf("devuelve %zu\n", ret0);
	printf("dst es %s\n", dst1);
	printf("devuelve %zu", ret1);
	return (0);
}
 */