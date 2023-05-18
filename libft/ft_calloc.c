/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:57:17 by moruiz-s          #+#    #+#             */
/*   Updated: 2023/05/17 16:14:40 by moruiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	totalsize;
	void	*mem;

	totalsize = (count * size);
	mem = malloc(totalsize);
	if (mem != NULL)
		ft_memset(mem, 0, size * count);
	return (mem);
}

/* int	main(void)
{
	size_t	count;
	size_t	size;
	char	*ptrc;

	count = 4;
	size = 2;
	ptrc = ft_calloc(count, sizeof(char));
	write(1, ptrc, 8);
	free(ptrc);
	return (0);
} */