/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:58:29 by moruiz-s          #+#    #+#             */
/*   Updated: 2023/06/06 11:52:55 by moruiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = ft_strlen(s);
	str = (char *)s;
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return (&str[i]);
		i--;
	}
	return (NULL);
}
/* int	main(void)
{
	const char	*s1;
	char		*d;
	int			c;

	s1 = "hola mundo";
	c = 'd';
	d = ft_strrchr(s1, c);
	printf("%s\n", d);
	write(1, d, 2);
	return (0);
}  */