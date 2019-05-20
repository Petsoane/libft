/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 14:19:21 by lpetsoan          #+#    #+#             */
/*   Updated: 2019/05/20 14:37:28 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char const *s);

char	*ft_strnstr(const char *n, const char *h, size_t len)
{
	int 	i;
	int 	size_h;
	int 	size_n;
	char const	*p;

	if (h == NULL)
		return (NULL);
	i = 0;
	size_n = ft_strlen(n);
	size_h = ft_strlen(h);
	while (*h && (size_h - size_n) > 0  && len > 0)
	{
		if (*h == n[0])
		{
			p = h;
			while (n[i] && *h && len > 0)
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
				len--;
			}
		}
		h++;
		size_h--;
		len--;
	}	
	return ((char *)p);
}

