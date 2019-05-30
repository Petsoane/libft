/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 13:32:09 by lpetsoan          #+#    #+#             */
/*   Updated: 2019/05/30 14:14:50 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
static int	wordcount(char const *s, char c);
static int	wordlen(char const *s, char c);

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**out;

	i = 0;
	j = 0;
	out = (char **)malloc(sizeof(char *) * wordcount(s,c));
	if (!out)
		return (NULL);
	while (*s)
	{
		j = 0;
		while (*s && *s == c)
			s++;
		if (!*s)
			break;
		out[i] = (char *)malloc(sizeof(char) * wordlen(s, c) + 1);
		if (!out)
			return (NULL);
		while (*s && *s != c)
		{
			out[i][j] = *s;
			s++;
			j++;
		}
		out[i][j] = '\0';
		i++;
	}
	//printf("%d\n", wordcount(s, c));
	return (out);
}
static int wordlen(char const *s, char c)
{
	int len;

	len = 0;
	while (*s != c)
	{
		len++;
		s++;
	}
	return (len);
}

static int	wordcount(char const *s,char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		while (*s && *s != c)
		{
			if (*(s + 1) == c)
				count++;
			s++;
		}
	}
	return (count);
}
