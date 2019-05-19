/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 15:26:24 by lpetsoan          #+#    #+#             */
/*   Updated: 2019/05/19 15:31:17 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strncat(char const *dst, char const *src, size_t n)
{
	int i;

	i = 0;
	while (dst[i])
		i++;
	i -= 1;
	while (n > 0)
	{
		dst[i++] = *src++;
		n--;
	}
	return (dst);
}
