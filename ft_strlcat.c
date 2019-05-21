/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 15:33:38 by lpetsoan          #+#    #+#             */
/*   Updated: 2019/05/21 16:45:28 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, char const *src, size_t len)
{
	size_t i;

	i = ft_strlen(dst);
	len -= i - 1;
	while (len> 0)
	{
		dst[i - 1] = *src++;
		i++;
		len--;
	}
	return (len);
}
