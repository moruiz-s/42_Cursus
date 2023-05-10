/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:58:29 by moruiz-s          #+#    #+#             */
/*   Updated: 2023/05/10 19:06:51 by moruiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	c = (char)c;
	i = ft_strlen(s);
	str = (char *)s;
	if (c == '\0')
		return (NULL);
	while (str[i] != c)
		i--;
	if (str[i] == c)
		return (&str[i]);
	return (NULL);
}
