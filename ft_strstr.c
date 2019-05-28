/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:19:04 by lpetsoan          #+#    #+#             */
/*   Updated: 2019/05/28 13:22:02 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strstr(const char *n, const char *h)
{
	int		i;

	i = 0;
	while (*h)
	{
			i = 0;
		while (*(h + i) == n[i])
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
