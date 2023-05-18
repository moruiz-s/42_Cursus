/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 16:57:42 by moruiz-s          #+#    #+#             */
/*   Updated: 2023/05/17 15:13:33 by moruiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t				i;
	size_t				j;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] && (i < len))
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j < len))
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

/* int	main(void)
{
	char	*h;
	char	*n;
	char	*ptr;
	size_t	i;

	h = "en un lugar de la mancha";
	n = "lugar";
	i = 11;
	ptr = ft_strnstr(h, n, i);
	write(1, ptr, 3);
	printf("\nla función devuelve %s\n", ptr);
	return (0);
} 
 */