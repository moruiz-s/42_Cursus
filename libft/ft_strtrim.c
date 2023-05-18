/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 15:08:40 by moruiz-s          #+#    #+#             */
/*   Updated: 2023/05/18 17:08:32 by moruiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count])
		count++;
	return (count);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size;
	char	*subst;

	if (!s)
		return (NULL);
	if (start >= strlen(s))
		return (strdup(""));
	size = strlen(s + start);
	if (size < len)
		len = size;
	subst = (char *)malloc(sizeof(char) * (len + 1));
	if (!subst)
		return (NULL);
	strlcpy(subst, s + start, len + 1);
	return (subst);
} */

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
	while (set[i] != '\0')
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

	s1 = "";
	set = "olh";
	s_cut = ft_strtrim(s1, set);
	//printf("%s", ft_strtrim(s1, set));
	write(1, s_cut, 10);
	free(s_cut);
	return (0);
}
 */