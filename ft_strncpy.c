/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 15:15:49 by lpetsoan          #+#    #+#             */
/*   Updated: 2019/05/19 15:19:49 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strncpy(char const *dst, char const src, size_t len)
{
	int i;

	i = 0;
	while (*src)
	{
		dst[i] = *src++;
		i++;
	}
	while (i < len)
		dst[i] = '\0';
	return (dst);

}
