/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 11:41:42 by lpetsoan          #+#    #+#             */
/*   Updated: 2019/06/01 10:58:05 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char		*ft_strrev(char **s)
{
	int     len;
	int     i;
    char    *out;

    i = 0;
    len = ft_strlen(*s);
    out = (char *)malloc(sizeof(char) * len);
    while (--len >= 0)
    {
        out[i] = (*s)[len];
        i++;
    }
    out[i] = '\0';
    free(*s);
    *s = NULL;
    return (out);
}

static char		*ft_ifalloc(int isneg, int size)
{
	char *out;

	if (isneg == 1)
		out = (char *)malloc(sizeof(char) * size + 3);
	else
		out = (char *)malloc(sizeof(char) * size + 2);
	return (out);
}

char			*ft_itoa(int num)
{
	char		*out;
	char		*s_temp;
	long		size;
	long		temp;
	int			i;
	int			isneg;
	
	i = 0;
	isneg = 0;
	if (num == 0)
		return (ft_strdup("0"));
	if (num < 0)
	{
		isneg = 1;
		num *= -1;
	}
	temp = num;
	size = 0;
	while (temp > 10)
	{
		size += 1;
		temp /= 10;
	}
	s_temp = ft_ifalloc(isneg, size);
	if (!s_temp)
		return (NULL);
	while (num != 0)
	{
		s_temp[i++] = (num % 10) + (int)'0';
		num /= 10;
	}
	if (isneg == 1)
		s_temp[i++] = '-';
	s_temp[i] = '\0';
	out = ft_strrev(&s_temp);
	return (out);
}
