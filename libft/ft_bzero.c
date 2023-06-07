/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 17:50:53 by moruiz-s          #+#    #+#             */
/*   Updated: 2023/06/06 12:02:39 by moruiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	ft_memset(str, 0, n);
}

/* int	main(void)
{
	char	s[10] = "hola mundo";
	size_t	n;

	n = 2;
	ft_bzero(s, n);
	write(1, s, 10);
	return (0);
}
 */