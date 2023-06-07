/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:49:47 by moruiz-s          #+#    #+#             */
/*   Updated: 2023/06/06 13:04:10 by moruiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;

	copy = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (copy == NULL)
		return (NULL);
	ft_memcpy(copy, s1, ft_strlen(s1));
	copy[ft_strlen(s1)] = '\0';
	return (copy);
}

/* int main(void)
{
	char	*s1;
	char	*copy;

	s1 = "hola";
	copy = ft_strdup(s1);
	write(1, copy, 4);
	return (0);
} */