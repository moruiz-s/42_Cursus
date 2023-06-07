/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 12:48:49 by moruiz-s          #+#    #+#             */
/*   Updated: 2023/06/06 12:17:27 by moruiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (str1[i] == str2[i]))
	{
		if ((unsigned char)str1[i] == '\0')
			return (0);
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}

/* int	main(void)
{
	const char	*s1;
	const char	*s2;
	int			i;

	s1 = "mundaos";
	s2 = "mundi";
	i = ft_strncmp(s1, s2, 7);
	printf("resultado de la función %d\n", i);
	printf("resultado de la función %d", ft_strncmp(s1, s2, 7));
	return (0);
} */
