/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 15:08:40 by moruiz-s          #+#    #+#             */
/*   Updated: 2023/06/06 13:17:24 by moruiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*s_cut;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	i = 0;
	end = ft_strlen(s1) - 1;
	while (set[i] != '\0' && end >= 0)
	{
		while (s1[start] == set[i] || s1[end] == set[i])
		{
			if (s1[start] == set[i])
				start++;
			if (s1[end] == set[i])
				end--;
			i = 0;
		}
		i++;
	}
	s_cut = ft_substr(s1, start, end - start + 1);
	return (s_cut);
}

/* int	main(void)
{
	char	*s1;
	char	*set;
	char	*s_cut;

	s1 = "12434jose1111";
	set = "123";
	s_cut = ft_strtrim(s1, set);
	//printf("%s", ft_strtrim(s1, set));
	write(1, s_cut, 10);
	free(s_cut);
	return (0);
} */
