/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 12:04:15 by lpetsoan          #+#    #+#             */
/*   Updated: 2019/06/21 08:26:14 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void	remove_end(char **out, int i)
{
	while (i != 0 && ((*out)[i] == ' ' || (*out)[i] == '\t' || (*out)[i] == '\n'))
		i--;
	(*out)[i + 1] = '\0';
}

char		*ft_strtrim(char const *str)
{
	char	*out;
	char	curr;
	int		i;
	int		is_start;

	if (str == NULL)
		return (NULL);
	i = 0;
	is_start = 1;
	out = (char *)malloc(ft_strlen(str) + 1);
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
	remove_end(&out, --i);
	return (out);
}
