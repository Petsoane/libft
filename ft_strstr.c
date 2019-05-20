/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:19:04 by lpetsoan          #+#    #+#             */
/*   Updated: 2019/05/20 14:17:09 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char const *s);

char	*ft_strstr(const char *n, const char *h)
{
	int 	i;
	int 	size_h;
	int 	size_n;
	char const	*p;

	i = 0;
	size_n = ft_strlen(n);
	size_h = ft_strlen(h);
	while (*h && (size_h - size_n) > 0)
	{
		if (*h == n[0])
		{
			p = h;
			while (n[i] && *h )
			{
					
				if (*h != n[i])
				{
					p = NULL;
					i = 0;
					break;
				}
				h++;
				size_h--;
				i++;
			}
		}
		h++;
		size_h--;
	}	
	return ((char *)p);
}
