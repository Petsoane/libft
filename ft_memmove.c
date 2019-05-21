/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 09:16:51 by lpetsoan          #+#    #+#             */
/*   Updated: 2019/05/21 16:00:15 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char *temp_dst;
	unsigned char *temp_src;

	temp_dst = (unsigned char *)dst;
	temp_src = (unsigned char *)src;
	while (n > 0)
	{
		*temp_dst++ = *temp_src++;
		n--;
	}
	return (dst);
}
