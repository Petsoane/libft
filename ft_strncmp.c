/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 14:59:49 by lpetsoan          #+#    #+#             */
/*   Updated: 2019/05/27 10:30:30 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t len)
{
	int size_1;
	int size_2;

	size_1 = ft_strlen(s1);
	size_2 = ft_strlen(s2);
	if (size_1 == 0 || size_2 == 0)
		return (size_1 - size_2);
	while (*s1 && *s2 && len--)
	{
		if (*s2 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}
