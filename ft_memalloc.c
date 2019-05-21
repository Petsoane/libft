/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 08:54:40 by lpetsoan          #+#    #+#             */
/*   Updated: 2019/05/21 08:28:37 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	int	*r_mem;

	r_mem = (int *)malloc(size);
	if (r_mem)
		return (NULL);
	*r_mem = 0;
	return ((void *)r_mem);
}
