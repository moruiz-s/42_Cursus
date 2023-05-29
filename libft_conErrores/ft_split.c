/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moruiz-s <moruiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:08:45 by moruiz-s          #+#    #+#             */
/*   Updated: 2023/05/26 13:30:55 by moruiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countword(char *s, char c)
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

size_t	ft_strslen(char const *s, char c)
{
	size_t	i;
	int		fin;

	i = 0;
	fin = 0;
	while (s[i] && s[i] != c && fin == 0)
	{
		i++;
		if (s[i] && s[i] == c)
			fin++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		row;
	int		col;
	int		i;
	size_t	slen;

	i = 0;
	row = 0;
	col = 0;
	**strs = (char *)malloc(sizeof(char *) * (ft_countword(s, c) + 1));
	if (!strs)
		return (NULL);
	slen = ft_strslen(s, c);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			row++;
			printf("numero de columnas%d", row);
			while (s[i] && s[i] != c)
				col++;
			printf("numero de columnas%d", col);
		}
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
	char	strs[] = " jhj      gjhjf     ";
	char	c;
	char	**sp;
	int		len;

	c = ' ';
	len = ft_countword(strs, c);
	printf("el numero de palabras es: %d\n", len);
	sp = ft_split(strs, c);
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
