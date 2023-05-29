/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:08:45 by moruiz-s          #+#    #+#             */
/*   Updated: 2023/05/29 16:34:36 by moruiz-s         ###   ########.fr       */
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

char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	i;
	size_t	row;
	size_t	slen;

	if (!s)
		return(NULL);
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
		i += slen;
		row++;
		i++;
	}
	return (strs);
}

/*{
	

	
	while (s[i])
	{
		if (s[i] == c && row > 0)
			row++;
			col = 0;
		strs[row][col];
		col++;
		i++;
	}
	return (strs);
}
 */
int	main()
{
	char	strs[] = "  que tal mundo";
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
}
/* 	strs = (char **) malloc(sizeof(char *) * 3);
	strs[0] = "hola";
	strs[1] = "mundo"; */
	//strs = ft_split(s, c);
	/* i = 0;
	while (strs[i])
	{
		j = 0;
		while (strs[i][j])
		{
			printf("%c", strs[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	return (0);
} */
