/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 14:19:21 by lpetsoan          #+#    #+#             */
/*   Updated: 2019/05/28 13:21:33 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strstr(const char *n, const char *h, size_t n)
{
	int		i;

	i = 0;
	while (*h && n--)
	{
			i = 0;
		while (*(h + i) == n[i] && n--)
		{
			if (n[i + 1] == '\0')
			{
				return ((char *)h);
			}
			i++;
		}
		h++;
	}
	return (NULL);

}



