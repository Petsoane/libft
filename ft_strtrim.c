/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 12:04:15 by lpetsoan          #+#    #+#             */
/*   Updated: 2019/05/18 12:30:08 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strtrim(char const *str)
{
	char	*out;
	char	curr;
	int		i;
	int 	is_start;
	int 	size;

	size = 0;
	i = 0;
	is_start = 1;
	while (str[size])
		size++;
	out = (char *)malloc(size);
	if (!out)
		return (NULL);
	while (*str)
	{
		curr = *str;
		if ((curr == '\n' || curr == ' ' || curr == '\t') && is_start == 1)
		{
			str++;
			continue;
		}
		is_start = 0;
		out[i++] = *str++;
	}
	i -= 1;
	while (i != 0 && (out[i] == ' '|| out[i] == '\t' || out[i] == '\n'))
		i--;
	out[i + 1] = '\0';
	return (out);
}
