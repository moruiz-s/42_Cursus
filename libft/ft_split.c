/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:08:45 by moruiz-s          #+#    #+#             */
/*   Updated: 2023/05/29 17:04:50 by moruiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcount(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static size_t	ft_divword(char const *s, int i, char c)
{
	int		len;

	len = 0;
	while (s[i])
	{
		if (s[i] && s[i] == c)
			return (len);
		i++;
		len++;
	}
	return (len);
}

static char	**ft_freesplit(char **split)
{
	size_t	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	i;
	size_t	row;
	size_t	slen;

	if (!s)
		return (NULL);
	strs = ft_calloc((ft_wordcount((char *)s, c) + 1), sizeof(char *));
	if (!strs)
		return (NULL);
	i = 0;
	row = 0;
	while (row < (ft_wordcount((char *)s, c)))
	{
		while (s[i] == c)
			i++;
		slen = ft_divword(s, i, c);
		strs[row] = ft_substr(s, i, slen);
		if (!strs[row])
			return (ft_freesplit(strs), NULL);
		i += slen;
		row++;
		i++;
	}
	return (strs);
}

/* int	main()
{
	char	strs[] = "  hola que tal";
	char	c;
	char	**sp;
	int		len;

	c = ' ';
	len = ft_wordcount(strs, c);
	//len = ft_countword(strs, c);
	printf("el numero de palabras es: %d\n", len);
	sp = ft_split(strs, c);
	printf("sp[0]%s\n", sp[0]);
	printf("sp[1]%s\n", sp[1]);
	printf("sp[2]%s\n", sp[2]);
	printf("sp[3]%s\n", sp[3]);
	return (0);
} */
