/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetsoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 12:18:02 by lpetsoan          #+#    #+#             */
/*   Updated: 2019/05/16 12:27:11 by lpetsoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char 	*str;
	size_t 	i;

	i = 0;
	str =(char *)malloc(size);
	while (i < size)
		str[i++] = '\0';
	return (str);
}
