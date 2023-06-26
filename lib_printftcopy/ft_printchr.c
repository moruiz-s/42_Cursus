/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 15:39:56 by moruiz-s          #+#    #+#             */
/*   Updated: 2023/06/26 16:01:07 by moruiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "unistd.h"

int	ft_printchr(char c)
{
	return (write(1, &c, 1));
}

/* int main (void)
{
	char	c;
	int		i;

	c = 'a';
	i = ft_printchr(c);
	printf("el entero es %d", i);
} */