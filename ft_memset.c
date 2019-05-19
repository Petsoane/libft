/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 14:44:16 by lpetsoan          #+#    #+#             */
/*   Updated: 2019/05/19 14:48:50 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memset(void *ptr, int x, size_t len)
{
	unsigned char *p;
	size_t i;

	i = 0;
	p = (unsigned char *)ptr;
	while (i < len)
	{
		p[i++] = x;
	}
	return (ptr);
}
