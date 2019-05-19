/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 15:33:38 by lpetsoan          #+#    #+#             */
/*   Updated: 2019/05/19 15:39:37 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char const *s);

size_t	ft_strlcat(char *dst, char const *src, size_t len)
{
	size_t i;

	i = ft_strlen(dst);
	len -= i - 1;
	while (size > 0)
	{
		dst[i - 1] = *src++;
		i++;
		size--;
	}
	return (len);
}
